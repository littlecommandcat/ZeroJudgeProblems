#include <bits/stdc++.h>
using namespace std;

int n;
char s[30];

void dfs(int pos, int open, int close) {
    if (pos == 2 * n) {
        s[pos] = '\0';
        puts(s);
        return;
    }
    if (open < n) {
        s[pos] = '(';
        dfs(pos + 1, open + 1, close);
    }
    if (close < open) {
        s[pos] = ')';
        dfs(pos + 1, open, close + 1);
    }
}

int main() {
    while (scanf("%d", &n) == 1) {
        dfs(0, 0, 0);
    }
    return 0;
}