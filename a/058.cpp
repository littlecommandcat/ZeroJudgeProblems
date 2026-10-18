#include <bits/stdc++.h>

int main() {
    int num, n, ans[3] = {0};
    std::cin >> num;
    for (int i = 0; i < num; i += 1) {
        std::cin >> n;
        if (n % 3 == 0) {
            ans[0] += 1;
        } else if (n % 3 == 1) {
            ans[1] += 1;
        } else if (n % 3 == 2) {
            ans[2] += 1;
        }
    }
    std::cout << ans[0] << " " << ans[1] << " " << ans[2];
}