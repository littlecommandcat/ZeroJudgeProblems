#include <bits/stdc++.h>

int main() {
    long long n, m;
    while (std::cin >> n >> m) {
        long long ans = 0;
        long long d = 0;
        while (true) {
            ans += (n + d);
            d += 1;
            if (ans > m) {
                std::cout << d << std::endl;
                break;
            }
        }
    }
    return 0;
}
