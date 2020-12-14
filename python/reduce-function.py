from fractions import Fraction
from functools import reduce
from math import gcd

def product(fracs):
    t = reduce(lambda x, y : x*y, fracs)# complete this line with a reduce statement
    while gcd(t.numerator, t.denominator) != 1:
        t = Fraction(t.numerator/gcd, t.denominator/gcd)
    
    return t.numerator, t.denominator

if __name__ == '__main__':
    fracs = []
    for _ in range(int(input())):
        fracs.append(Fraction(*map(int, input().split())))
    result = product(fracs)
    print(*result)