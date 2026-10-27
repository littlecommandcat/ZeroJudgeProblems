score = int(input())
ans = 0
if score >= 40:
    ans = 100
else:
    if (score - 10) < 0:
        ans += score * 6
    else:
        ans += 60
        score -= 10
        if (score - 10) < 0:
            ans += score * 2
        else:
            ans += 20
            score -= 10
            if (score - 20) < 0:
                ans += score
            
print(ans)