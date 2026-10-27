#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int m, d;
    cin >> m >> d;
    int s = (m * 2 + d) % 3;
    string ans[3] = {"普通", "吉", "大吉"};
    cout << ans[s];
    return 0;
}