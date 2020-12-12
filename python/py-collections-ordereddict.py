# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict

if __name__ == "__main__":
    shop_items = OrderedDict()
    N = int(input().strip())
    for i in range(N):
        item_details = input().strip().split(" ")
        price = int(item_details[-1])
        item_name = " ".join(item_details[:-1])
        # print(item_name, price)
        if item_name in shop_items.keys():
            shop_items[item_name] += price
        else:
            shop_items[item_name] = price

    for key, value in shop_items.items():
        print(key, value)