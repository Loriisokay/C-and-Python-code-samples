# ask for input (probably an infinite loop)
# check if input is 5, 10 or 25, if not ignore
# if the previous condition is true, then create a variabe and update it's value
# calculate and print "Amount due 50"
# if it's => than 50, print "Chage owed: amount left"

def main():
    current_sum = 0
    coke_price = 50
    coins_left = 50
    change = 0
    while True:
        coin = int(input("Insert coin: "))
        if coin == 25 or coin == 10 or coin == 5:
            current_sum += coin
            if current_sum < coke_price:
                coins_left = coke_price - current_sum
                print("Amount due:", coins_left)
            elif current_sum >= coke_price:
                change = current_sum - coke_price
                print("Change owed:", change)
                break
        else:
            print("Amount due:", coins_left)

main()
