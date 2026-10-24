n = int(input())
ans = ""
for _ in range(n):
    a, b, c = map(int, input().split())
    if a == 1:
        ans += f"{int(b + c)}\n"
    elif a == 2:
        ans += f"{int(b - c)}\n"
    elif a == 3:
        ans += f"{int(b * c)}\n"
    elif a == 4:
        ans += f"{int(b // c)}\n"

print(ans)