#include <bits/stdc++.h>

int main() {
    int num;
    while (std::cin >> num) {
        if (num == 0) {
            std::cout << 0 << "\n";
            continue;
        }

        std::string ans = "";
        while (num > 0) {
            ans += std::to_string(num % 2);
            num /= 2;
        }
        std::reverse(ans.begin(), ans.end());
        std::cout << ans << "\n";
    }
    return 0;
}
