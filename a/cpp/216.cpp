#include <bits/stdc++.h>

int main() {
    long long n;
    while (std::cin >> n) {
        long long f = n * (n + 1) / 2;
        long long g = n * (n + 1) * (n + 2) / 6;
        std::cout << f << " " << g << std::endl;
    }
    return 0;
}
