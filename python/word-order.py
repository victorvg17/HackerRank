# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter

if __name__ == "__main__":
    N = int(input().strip())
    words = []
    for i in range(N):
    	word = input().strip()
    	words.append(word)
	words_counter = Counter(words)
	print(len(set(words)))
	for count in words_counter.values():
		print(count, end=" ")