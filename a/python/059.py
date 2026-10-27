n = int(input()) + 1
ans = [[] for _ in range(n)]
while (n := n - 1):
    a = int(input())
    b = int(input())
    for nu in range(a, b + 1):
        if nu ** 0.5 % 1 == 0:
            ans[n].append(nu)

for i, an in enumerate(ans[::-1][:-1]):
    # if i == 0:
    #     continue
    print(f"Case {i + 1}: {sum(an)}")