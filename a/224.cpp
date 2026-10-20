#include <bits/stdc++.h>

int main() {
    std::string words;
    while (std::cin >> words) {
        int counts[26] = {0};
        
        for (char c : words) {
            if (std::isalpha(c)) {
                counts[std::tolower(c) - 'a']++;
            }
        }
        
        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (counts[i] % 2 != 0) {
                odd_count++;
            }
        }
        
        if (odd_count > 1) 
            std::cout << "no..." << std::endl;
        else
            std::cout << "yes !" << std::endl;
    }
    return 0;
}