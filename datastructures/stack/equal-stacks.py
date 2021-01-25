
def equalStacks(h1, h2, h3):
    # Write your code here
    s1, s2, s3 = map(sum, [h1, h2, h3])
    while h1 and h2 and h3:
        m = min(s1, s2, s3)
        while s1>m:
            s1 -= h1.pop(0)
        while s2>m:
            s2 -= h2.pop(0)
        while s3>m:
            s3 -= h3.pop(0)
        if (s1 == s2) & (s2 == s3):
            return m
    return 0
