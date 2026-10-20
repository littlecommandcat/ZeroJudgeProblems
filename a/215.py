while True:
    try:
        n, m = map(int, input().split())
        ans = 0
        d = 0
        while True:
            ans += (n + d)
            d += 1
            if ans > m:
                print(d)
                break
    except:
        break