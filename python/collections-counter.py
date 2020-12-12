from collections import Counter
if __name__ == "__main__":
	no_shoes = int(input().strip(" "))
	shoe_sizes = map(int, input().split(" "))
	no_customers = int(input().strip(" "))
	shoe_collection = Counter(list(shoe_sizes))
	money = 0

	for i in range(no_customers):
		size_customer, price = map(int, input().split(" "))
		print(size_customer, price)
		if size_customer in list(shoe_collection.elements()):
			money += price
			shoe_collection[size_customer] -= 1
	print(money)




