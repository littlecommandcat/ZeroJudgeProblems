n = int(input())
factors = {}
d = 2
while d * d <= n:
    while (n % d) == 0:
        factors.setdefault(d, 0)
        factors[d] += 1
        n //= d
    d += 1
if n > 1:
    factors[n] = 1

ans = ""
f = False
for num in factors:
    ans += f"{" * " if f else ""}{num}{" ^ " if factors[num] != 1 else ""}{factors[num] if factors[num] != 1 else ""}"
    f = True

print(ans)