#include <bits/stdc++.h>

int main() {
    int n;
    long long ans;
    while (std::cin >> n) {
        ans = std::pow(n, 2) - n + 2;
        std::cout << ans << std::endl;
    }
}