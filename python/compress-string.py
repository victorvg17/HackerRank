from itertools import groupby

def compress_string(s:str)->None:
    groups = []
    uniquekeys = []

    for key, group in groupby(s):
        groups.append(list(group))
        uniquekeys.append(key)
    for key, group in zip(uniquekeys, groups):
        answer = (int(len(group)), int(key))
        print(answer, end=" ")

if __name__ == "__main__":
    s = input()
    compress_string(s)