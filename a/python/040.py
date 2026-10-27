n1, n2 = map(int, input().split())

ans_data = []
for n in range(n1, n2 + 1):
    s_n = str(n)
    length = len(s_n)
    power_table = [i ** length for i in range(10)]
    ans = sum(power_table[int(w)] for w in s_n)

    if n == ans:
        ans_data.append(s_n)

if ans_data:
    print(" ".join(ans_data))
else:
    print("none")