data = [int(input()) for _ in range(int(input()))]
ans = [0, 0, 0]
for n in data:
    if n % 3 == 0:
        ans[0] += 1
    elif n % 3 == 1:
        ans[1] += 1
    elif n % 3 == 2:
        ans[2] += 1

print(" ".join(list(map(str, ans))))