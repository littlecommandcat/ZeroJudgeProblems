#include <bits/stdc++.h>

int main() {
	long long num, ans = 0;
	std::cin >> num;
	while (num > 0) {
		ans *= 10;
		ans += (num % 10);
		num /= 10;
	}
	std::cout << ans;
	return 0;
}
