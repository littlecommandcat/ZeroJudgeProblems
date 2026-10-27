l = int(input())
data = [list(map(int, input().split())) for _ in range(l)]
for _ in range(l):
    d_ok = data[_][-1] - data[_][-2] == data[_][-2] - data[_][-3]
    if d_ok:
        data[_].append(data[_][-1] + data[_][-1] - data[_][-2])
    else:
        r = data[_][-1] / data[_][-2]
        data[_].append(int(data[_][-1] * data[_][-1] / data[_][-2]))

    # print(data[_])
    print(" ".join(list(map(str, data[_]))))
    # print()