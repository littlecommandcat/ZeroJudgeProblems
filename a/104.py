while True:
    try:
        n = input()
        data = list(map(int, input().split()))
        data.sort()
        print(" ".join(list(map(str, data))))
    except:
        break

