from collections import namedtuple
import re

if __name__ == "__main__":
    Students = []
    total_sum = 0
    N = int(input().strip())
    
    col_names = re.sub(' +', ' ', input().strip())
    col0, col1, col2, col3 = col_names.split(' ')
    Student = namedtuple('Student', [col0, col1, col2, col3])
    for i in range(N):
        col_values = re.sub(' +', ' ', input().strip())
        col0_val, col1_val, col2_val, col3_val = col_values.split(' ')
        st = Student(col0_val, col1_val, col2_val, col3_val)
        Students.append(st)
    for st in Students:
        total_sum += int(st.MARKS)
    print(total_sum/len(Students))