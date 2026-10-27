#include <bits/stdc++.h>

int main() {
    std::map<char, int> letter_map = {
        {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}, {'G', 16}, {'H', 17},
        {'I', 34}, {'J', 18}, {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35}, {'P', 23},
        {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27}, {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30},
        {'Y', 31}, {'Z', 33}
    };

    std::string words;
    if (!(std::cin >> words))
        return 0;

    int weights[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int mid_sum = 0;
    for (int i = 0; i < 8; i++) {
        mid_sum += (words[i] - '0') * weights[i];
    }

    int suffix_sum = mid_sum + (words[8] - '0');
    std::string ans = "";

    for (auto const pair : letter_map) {
        char letter = pair.first;
        int num = pair.second;
        int n1 = num / 10;
        int n2 = num % 10;
        int total_sum = n1 * 1 + n2 * 9 + suffix_sum;
        if (total_sum % 10 == 0) {
            ans += letter;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
