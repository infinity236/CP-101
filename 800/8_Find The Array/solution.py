def solve():
    n = int(input())
    sum = 0
    i = 1
    pSize = 0
    while sum < n:
        sum += i
        i += 2
        pSize += 1
    print(pSize)

t = int(input())
while t > 0:
    solve()
    t -= 1