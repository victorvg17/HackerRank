# Enter your code here. Read input from STDIN. Print output to STDOUT
from typing import List

def print_result(s:str):
    inp = list(map(int, s.split(" ")))
    curr = 0
    last_push = 2**31
    for i in range(len(inp)):
        if inp[0] > inp[-1]:
            curr = inp.pop(0)
        else:
            curr = inp.pop()
        if curr > last_push:
            print("No")
            return
        last_push = curr
    print("Yes")
            
if __name__ == "__main__":
    T = int(input())
    input_data = []
    for i in range(T):
        n = int(input())
        s = input()
        input_data.append(s)
    
    for s in input_data:
        print_result(s)