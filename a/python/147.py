while True:
    try:
        n = int(input())
        if n == 0:
            break
        ans = []
        for i in range(1, n):
            if i % 7 == 0:
                continue
            ans.append(i)
        print(" ".join(list(map(str, ans))))
    except:
        break
