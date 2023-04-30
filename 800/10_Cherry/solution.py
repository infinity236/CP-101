def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    ans = 0
    for i in range(0, (n-1)):
        ans = max(ans, arr[i] * arr[i+1])
    
    print(ans)


t = int(input())
for _ in range(t):
    solve()