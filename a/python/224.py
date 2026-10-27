while True:
    try:
        words = input().strip()
        
        counts = {}
        for char in words:
            if char.isalpha():
                lower_char = char.lower()
                counts[lower_char] = counts.get(lower_char, 0) + 1
                
        odd_count = 0
        for count in counts.values():
            if count % 10 == 1 or count % 2 == 1:
                odd_count += 1
                
        if odd_count > 1:
            print("no...")
        else:
            print("yes !")
    except:
        break
