n = int(input())
ans = []
for _ in range(n):
    a = 1
    for w in str(input()):
        if int(w) == 0:
            a = 0
            break
        a *= int(w)

    ans.append(a)

for d in ans:
    print(d)