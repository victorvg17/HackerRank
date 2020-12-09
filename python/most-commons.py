if __name__ == '__main__':
    string = input()
    keys = set(string)
    ds = dict(zip(keys, [1]*len(keys)))
    for s in string:
        ds[s] += 1
    ds = {k:v for k, v in sorted(ds.items(), key=lambda item: (-item[1], item[0]))}
    for i, item in enumerate(ds.items()):
        print(item[0], item[1]-1)
        if i == 2:
            break


from collections import Counter


if __name__ == '__main__':
    string = input()
    chars = Counter(string).items()
    for char, n in sorted(chars, key=lambda c: (-c[1], c[0]))[:3]:
        print(char, n)