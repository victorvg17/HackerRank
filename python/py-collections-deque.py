# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque

if __name__ == "__main__":
    N = int(input().strip())
    d = deque()
    for i in range(N):
        inp_args = input().strip().split(" ")
        op = inp_args[0]
        if len(inp_args) > 1:
            num = int(inp_args[1])
        if op == "append":
            d.append(num)
        elif op == "pop":
            d.pop()
        elif op == "popleft":
            d.popleft()
        elif op == "appendleft":
            d.appendleft(num)
    d = map(str, d)
    print(" ".join(d))