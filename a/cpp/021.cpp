#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string removeLeadingZeros(std::string s) {
    size_t firstNonZero = s.find_first_not_of('0');
    if (firstNonZero == std::string::npos) return "0";
    return s.substr(firstNonZero);
}

bool absLess(std::string a, std::string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

std::string bigAdd(std::string a, std::string b) {
    std::string res = "";
    int i = a.length() - 1, j = b.length() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        carry = sum / 10;
        res += (sum % 10) + '0';
    }
    std::reverse(res.begin(), res.end());
    return res;
}

std::string bigSub(std::string a, std::string b) {
    std::string res = "";
    int i = a.length() - 1, j = b.length() - 1, borrow = 0;
    while (i >= 0) {
        int sub = (a[i--] - '0') - borrow;
        if (j >= 0) sub -= (b[j--] - '0');
        if (sub < 0) { sub += 10; borrow = 1; }
        else { borrow = 0; }
        res += sub + '0';
    }
    std::reverse(res.begin(), res.end());
    return removeLeadingZeros(res);
}

std::string bigMultiply(std::string a, std::string b) {
    if (a == "0" || b == "0") return "0";
    int n1 = a.length(), n2 = b.length();
    std::vector<int> num(n1 + n2, 0);

    for (int i = n1 - 1; i >= 0; i--) {
        for (int j = n2 - 1; j >= 0; j--) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + num[i + j + 1];
            num[i + j + 1] = sum % 10;
            num[i + j] += sum / 10;
        }
    }

    std::string res = "";
    for (int x : num) {
        if (!(res.empty() && x == 0)) res += std::to_string(x);
    }
    return res;
}

std::string bigDivide(std::string a, std::string b) {
    if (absLess(a, b)) return "0";

    std::string quotient = "";
    std::string remainder = "";
    
    for (char c : a) {
        if (remainder == "0") remainder = std::string(1, c);
        else remainder += c;

        int low = 0, high = 9, ans = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            std::string cur = bigMultiply(b, std::to_string(mid));
            
            if (cur == remainder || absLess(cur, remainder)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        quotient += std::to_string(ans);
        remainder = bigSub(remainder, bigMultiply(b, std::to_string(ans)));
    }

    return removeLeadingZeros(quotient);
}

int main() {
    std::string n1, op, n2;
    std::cin >> n1 >> op >> n2;
    if (op == "+")
        std::cout << bigAdd(n1, n2);
    else if (op == "-")
        std::cout << bigSub(n1, n2);
    else if (op == "*")
        std::cout << bigMultiply(n1, n2);
    else
        std::cout << bigDivide(n1, n2);

    return 0;
}
