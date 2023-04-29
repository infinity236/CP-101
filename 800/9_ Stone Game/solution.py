def numMoves(index1, index2, size):
    m1 = min(max(index1, index2), max(size - index1 + 1, size - index2 + 1))
    m2 = min(index1, index2) + (size + 1 - max(index1, index2))
    return min(m1, m2)

def solve():
    n = int(input())
    arr = list(map(int, input().split()))

    minNumIndex = arr.index(min(arr)) +1
    maxNumIndex = arr.index(max(arr)) +1

    print(numMoves(minNumIndex, maxNumIndex, n))


t = int(input())
for _ in range(t):
    solve()