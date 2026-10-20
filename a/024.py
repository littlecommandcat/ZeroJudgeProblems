i, j = map(int, input().split())

while j != 0:
    i, j = j, i % j
print(i)