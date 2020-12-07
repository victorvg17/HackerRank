# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
if __name__ == "__main__":
    s = input().strip()
    m = re.search(r'([0-9a-zA-Z])\1+', s)
    print(m.group(1) if m else -1)
    