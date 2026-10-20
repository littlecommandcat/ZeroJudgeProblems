#include <bits/stdc++.h>

int main() {
    int n;
    while (std::cin >> n) {
        std::vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            std::cin >> nums[i];
        }

        std::sort(nums.begin(), nums.end(), [](int a, int b) {
            int r1 = a % 10;
            int r2 = b % 10;
            if (r1 != r2) {
                return r1 < r2;
            }
            return a > b;
        });

        for (int i = 0; i < n; i++) {
            std::cout << nums[i] << (i == n - 1 ? "" : " ");
        }
        std::cout << std::endl;
    }
    return 0;
}
