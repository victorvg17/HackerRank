# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    n = int(input())
    n_st = set(input().split(" "))
    b = int(input())
    b_st = set(input().split(" "))
    all_st = n_st.union(b_st)
    both_st = n_st.intersection(b_st)
    our_st = all_st.difference(both_st)
    print(len(our_st))