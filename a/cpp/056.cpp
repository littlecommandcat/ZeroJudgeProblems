#include <bits/stdc++.h>

int main() {
    std::string words;
    if (!(std::cin >> words))
        return 0;

    std::string ans = "";
    for (int i = 0; i < 6; i++) {
        int dist = std::abs(words[i] - words[i + 1]);
        ans += std::to_string(dist);
    }

    std::cout << ans << std::endl;
    return 0;
}
