#include <bits/stdc++.h>

int main() {
    int n, a, b, c;
    std::cin >> n;
    int ans[n];
    for (int i = 0; i < n; i += 1) {
        std::cin >> a >> b >> c;
        if (a == 1) {
            ans[i] = b + c;
        } else if (a == 2) {
            ans[i] = b - c;
        } else if (a == 3) {
            ans[i] = b * c;
        } else {
            ans[i] = b / c;
        }
    }
    for (int i = 0; i < n; i += 1) {
        std::cout << ans[i] << "\n";
    }
}