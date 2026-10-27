#include <bits/stdc++.h>

int main() {
    std::string str;
    std::cin >> str;
    int left = 0, right = str.length() - 1;
    bool denied = false;
    while (left < right) {
        if (str[left] != str[right]) {
            std::cout << "no";
            denied = true;
            break;
        }
        left += 1;
        right -= 1;
    }
    if (!denied)
        std::cout << "yes";
    return 0;
}