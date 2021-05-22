
#!/bin/python3

import math
import os
import random
import re
import sys
from typing import Dict, List

#
# Complete the 'contacts' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts 2D_STRING_ARRAY queries as parameter.
#
m = {}

def add_name(s:str):
    for i in range(1, len(s)+1):
        if s[:i] in m:
            m[s[:i]] += 1
        else:
            m[s[:i]] = 1

def find_partial(s:str) -> int:
    return m.get(s, 0)
    

def contacts(queries) -> List[int]:
    # Write your code here
    num_q = len(queries)
    freq = []
    for q in queries:
        op, word = q[0], q[1]
        if op == "add":
            add_name(word)
            # print(f"m:{m} after adding: {word}")
        else:
            n = find_partial(word)
            freq.append(n)
    return freq
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    queries_rows = int(input().strip())

    queries = []

    for _ in range(queries_rows):
        queries.append(input().rstrip().split())

    result = contacts(queries)
