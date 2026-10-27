while True:
    try:
        n = int(input())
        
        queue = [""]
        head = 0
        
        while len(queue[head]) < 2 * n:
            s = queue[head]
            head += 1
            
            left = s.count("(")
            right = s.count(")")
            
            if left < n:
                queue.append(s + "(")
            if right < left:
                queue.append(s + ")")
                
        for item in queue[head:]:
            print(item)
        print()
            
    except:
        break
