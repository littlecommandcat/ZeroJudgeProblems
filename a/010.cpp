#include <bits/stdc++.h>

int main() {
    int n, d = 2;
    bool first = true;
    std::cin >> n;
    while (d * d <= n) {
        int factors = 0;
        while (n % d == 0) {
            factors += 1;
            n /= d;
        }
        
        if (!first)
            std::cout << " * ";
        if (first)
            first = false;

        std::cout << d;
        if (factors > 1)
            std::cout << " ^ " << factors;
        
        d += 1;
    }
    if (n > 1) {
        if (!first) std::cout << " * ";
        std::cout << n;
    }
    return 0;
}
// n = int(input())
// factors = {}
// d = 2
// while d * d <= n:
//     while (n % d) == 0:
//         factors.setdefault(d, 0)
//         factors[d] += 1
//         n //= d
//     d += 1
// if n > 1:
//     factors[n] = 1

// ans = ""
// f = False
// for num in factors:
//     ans += f"{" * " if f else ""}{num}{" ^ " if factors[num] != 1 else ""}{factors[num] if factors[num] != 1 else ""}"
//     f = True

// print(ans)