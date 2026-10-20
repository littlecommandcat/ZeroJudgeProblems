while True:
    try:
        n_input = input().split()
        if not n_input:
            continue
        n = int(n_input[0])
        
        nums = []
        while len(nums) < n:
            nums.extend(map(int, input().split()))
            
        mapped_nums = []
        for x in nums[:n]:
            mapped_nums.append((x % 10, -x, x))
            
        mapped_nums.sort()
        
        ans = []
        for item in mapped_nums:
            ans.append(str(item[2]))
            
        print(" ".join(ans))
    except:
        break
