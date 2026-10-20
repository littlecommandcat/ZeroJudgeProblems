#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> ans(n, 1);
    for (int i = 0; i < n; i += 1) {
        std::string input;
        std::cin >> input;
        int inlength = input.length();
        
        for (int c = 0; c < inlength; c += 1) {
            int ina = input[c] - '0';
            if (ina == 0) {
                ans[i] = 0;
                break;
            }
            ans[i] *= ina;
        }
    }
    
    for (int k = 0; k < n; k += 1) {
        std::cout << ans[k] << std::endl;
    }
    return 0;
}
