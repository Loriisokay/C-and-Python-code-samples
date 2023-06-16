def main():
    menu = {
        "Baja Taco": 4.00,
        "Burrito": 7.50,
        "Bowl": 8.50,
        "Nachos": 11.00,
        "Quesadilla": 8.50,
        "Super Burrito": 8.50,
        "Super Quesadilla": 9.50,
        "Taco": 3.00,
        "Tortilla Salad": 8.00
    }

    total = 0

    while True:
        result = (take_order('Item: '))
        for item in menu:
            if item.lower() == result.lower():
                total += menu[item]
                print('Total: $%.2f' % total)
            else:
                pass


def take_order(str):
    try:
        order = input(str)
        return order
    except EOFError:
        print('\n')
        quit(0)


main()
