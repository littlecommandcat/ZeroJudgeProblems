while True:
    try:
        inputs = input().split()
        n = int(inputs.pop(0))
        data = list(map(int, inputs))
        if sum(data) / n > 59:
            print("no")
        else:
            print("yes")
    except:
        break