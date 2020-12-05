from itertools import combinations
if __name__ == '__main__':
    word, num = input().split(" ")
    for i in range(1, int(num)+1, 1):
        combi = list(combinations(sorted(word), i))
        for j in combi:
            print("".join(j))