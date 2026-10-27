#include <bits/stdc++.h>

int main() {
    int i, j, tmp;
    std::cin >> i >> j;
    while (j != 0) {
        tmp = i % j;
        i = j;
        j = tmp;
    }
    std::cout << i;
    return 0;
}