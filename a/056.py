words = input().strip()
ans = ""

for i in range(6):
    dist = abs(ord(words[i]) - ord(words[i+1]))
    ans += str(dist)

print(ans)
