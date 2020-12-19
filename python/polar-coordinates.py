# Enter your code here. Read input from STDIN. Print output to STDOUT
import cmath
if __name__ == "__main__":
    z = complex(input().strip())
    print(abs(z))
    print(cmath.phase(z))