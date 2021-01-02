#!/bin/python3

if __name__ == '__main__':
    n, m = map(int, input().split(" "))
    sheet = [None] * n
    for i in range(n):
        sheet[i] = list(map(int, input().split(" ")))
    k = int(input())
    sorted_sheet = sorted(sheet, key=lambda ath: ath[k])
    for ath in sorted_sheet:
        print(*ath)
    