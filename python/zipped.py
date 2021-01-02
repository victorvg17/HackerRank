# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    st, subs = list(map(int, input().split(" ")))
    mark_records = []
    for i in range(subs):
        mark_records.append(map(float, input().split(" ")))
    big_zip = zip(*mark_records)
    for j in big_zip:
        print(sum(j)/len(j))