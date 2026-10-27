#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main() {
    int n1, n2;
    if (!(std::cin >> n1 >> n2)) return 0;

    std::vector<std::string> ans_data;

    for (int n = n1; n <= n2; ++n) {
        std::string s_n = std::to_string(n);
        int length = s_n.length();
        
        int power_table[10];
        for (int i = 0; i < 10; ++i) {
            power_table[i] = std::pow(i, length);
        }

        int ans = 0;
        for (char w : s_n) {
            ans += power_table[w - '0'];
        }

        if (n == ans) {
            ans_data.push_back(s_n);
        }
    }

    if (!ans_data.empty()) {
        for (size_t i = 0; i < ans_data.size(); ++i) {
            std::cout << ans_data[i] << (i + 1 == ans_data.size() ? "" : " ");
        }
    } else {
        std::cout << "none";
    }
    return 0;
}
