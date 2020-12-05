# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import product
from typing import List, Tuple

def f(p:Tuple[int, ...], m:int)->int:
    S = 0
    for i in range(len(p)):
        S += p[i]**2
    S = S % m
    return S


def maximise_it(lists:List[int], m:int)->int:
    max_sum = 0
    max_p = []
    products = product(*lists)
    for p in products:
        S = f(p=p, m=m)
        if S > max_sum:
            max_sum = S
            max_p = list(p)
    return max_sum 

if __name__ == "__main__":
    K, M = map(int, input().split(" "))
    lists = []
    for i in range(K):
        s = list(input().split(" "))
        s = [int(k) for k in s[1:]]
        lists.append(s)
    assert len(lists) == K
    max_val = maximise_it(lists=lists, m=M)
    print(max_val)

