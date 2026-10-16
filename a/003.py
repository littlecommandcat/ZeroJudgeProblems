m, d = map(int, input().split())
s = (m * 2 + d) % 3
ans = ["普通", "吉", "大吉"]
print(ans[s])