from typing import List

def minion_game(string:str):
    # your code goes here
    ksc = 0 # vowel
    stc = 0 # consonants
    l = len(string)
    for i in range(l):
        if string[i] in "AEIOU":
            ksc += l - (i)
        else:
            stc += l - (i)
    if ksc > stc:
        print("Kevin", ksc)
    elif ksc < stc:
        print("Stuart", stc)
    else:
        print("Draw")
    

if __name__ == '__main__':
    s = input()
    minion_game(s)