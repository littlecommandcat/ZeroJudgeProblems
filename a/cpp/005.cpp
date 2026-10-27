#include <bits/stdc++.h>

int main() {
    int l;
    std::cin >> l;
    for (int i = 0; i < l; i++) {
        int data[5];
        for (int j = 0; j < 4; j++) {
            std::cin >> data[j];
        }
        bool d_ok = data[3] - data[2] == data[2] - data[1];

        if (d_ok) {
            data[4] = data[3] + (data[3] - data[2]);
        } else {
            data[4] = data[3] * data[3] / data[2];
        }
        for (int j = 0; j < 5; j++) {
            std::cout << data[j];

            if (j < 4)
                std::cout << " ";
        }
        std::cout << "\n";
    }

    return 0;
}