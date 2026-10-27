#include <bits/stdc++.h>

int main() {
    int n;
    long long ans;
    while (std::cin >> n) {
        ans = (std::pow(n, 3) + n * 5 + 6) / 6;
        std::cout << ans << std::endl;
    }
    return 0;
}