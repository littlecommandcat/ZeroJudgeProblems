#include <bits/stdc++.h>

int main() {

    double a, b, c;
    std::cin >> a >> b >> c;
    
    double d = b * b - 4 * a * c;
    
    if (d < 0) {
        std::cout << "No real root";
    }
    else if (d == 0) {
        double root = -b / (2 * a);
        std::cout << "Two same roots x=" << root;
    }
    else {
        double r1 = (-b + std::sqrt(d)) / (2 * a);
        double r2 = (-b - std::sqrt(d)) / (2 * a);
        double max = std::max(r1, r2);
        double min = std::min(r1, r2);
        
        std::cout << "Two different roots x1=" << max << ", x2=" << min;
    }
    
    return 0;
}
