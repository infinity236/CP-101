def solve():
    n = int(input())
    a = n-1
    b = a/2

    print(int(b), int(a), sep=" ")

t = int(input())
for _ in range(t):
    solve()
