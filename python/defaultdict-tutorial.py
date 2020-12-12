# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
if __name__ == "__main__":
    n,m = map(int, input().split(" "))
    A = defaultdict(list)
    B = []
    for i in range(n):
        A[input()].append(i+1)
    for j in range(m):
        B.append(input())
    for b in B:
        if b in A.keys():
            print(" ".join(map(str, A[b])))
        else:
            print(-1)
        