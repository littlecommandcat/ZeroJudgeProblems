ev = input().split()
n1, op, n2 = int(ev[0]), ev[1], int(ev[2])
if op == "+":
    print(n1 + n2)
elif op == "-":
    print(n1 - n2)
elif op == "*":
    print(n1 * n2)
elif op == "/":
    print(int(n1 / n2))