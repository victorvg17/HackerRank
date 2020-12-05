from itertools import combinations_with_replacement
if __name__ == '__main__':
    word, num= input().split(" ")
    combi = list(combinations_with_replacement(sorted(word), int(num)))
    for c in combi:
        print("".join(c))