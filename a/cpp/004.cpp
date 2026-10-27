#include <bits/stdc++.h>

int main() {
    int year;
    while (std::cin >> year) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            std::cout << "閏年\n";
        }
        else
            std::cout << "平年\n";
    }
    return 0;
}