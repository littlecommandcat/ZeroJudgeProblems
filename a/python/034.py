while True:
    try:
        num = int(input())
        ans = ""
        while True:
            ans += str(num % 2)
            num //= 2
            if num == 0:
                break

        print(ans[::-1])
    except:
        break