def merge_the_tools(string, k):
    # your code goes here
    n = len(string)
    no_pieces = int(n/k)
    substrings = []
    for i in range(0, n, k):
        sub=""
        for j in string[i:i+k]:
            if j not in sub:
                sub += j
        print(sub)

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(s