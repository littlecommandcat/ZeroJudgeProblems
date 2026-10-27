a, b, c = map(int, input().split())
d = b ** 2 - 4 * a * c
if d < 0:
    print("No real root")
elif d == 0:
    an = int(((-1 * b) + d ** 0.5) / (2 * a))
    print(f"Two same roots x={an}")
else:
    an = int(((-1 * b) + d ** 0.5) / (2 * a)), int(((-1 * b) - d ** 0.5) / (2 * a))
    # print(an)
    print(f"Two different roots x1={max(an)} , x2={min(an)}")