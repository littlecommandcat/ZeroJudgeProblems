K = 7
words = input()
ans = ""

for w in words:
    ans += chr(ord(w) - K)

print(ans)

# print(ord("J") - ord("C"))