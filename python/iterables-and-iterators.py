# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations

def get_probability(s:str, a:int)->float:
    combi = list(combinations(s, a))
    num=0
    den = len(combi)
    for elem in combi:
        if 'a' in elem:
            num += 1
    return num/den

if __name__=="__main__":
    N = int(input())
    s = input()
    s = s.replace(" ", "")
    a = int(input())
    prob = get_probability(s, a)
    print(prob)