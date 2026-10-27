#include <bits/stdc++.h>

int main() {
    int n;
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 1; i < n; i += 1) {
            if (i % 7 == 0) {
                continue;
            }
            std::cout << i;
            if (i < n - 1)
                std::cout << " ";
        }
        std::cout << "\n";
    }
    
}