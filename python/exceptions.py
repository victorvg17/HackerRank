# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
if __name__ == "__main__":
    T = int(input())
    for i in range(T):
        a, b = input().split(" ")
        try:
            print(int(a)//int(b))
        except ZeroDivisionError as e:
            print("Error Code: " + str(e))
        except ValueError as e:
            print("Error Code: " + str(e))
        
            