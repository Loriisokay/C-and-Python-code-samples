def main():
    fruits = input("Item: ")
    result = check_calories(fruits)
    if result:
        print("Calories:", result)
    else:
        return 1


def check_calories(str):
    fruits_list = {
        "apple": 130,
        "avocado": 50,
        "banana": 110,
        "cantaloupe": 50,
        "grapefruit": 60,
        "grapes": 90,
        "honeydew": 50,
        "kiwifruit": 90,
        "lemon": 15,
        "lime": 20,
        "nectarine": 60,
        "orange": 80,
        "peach": 60,
        "pear": 100,
        "pineapple": 50,
        "plums": 70,
        "strawberries": 50,
        "sweet cherries": 100,
        "tangerine": 50,
        "watermelon": 80
    }

    str = str.lower()

    for fruits in fruits_list:
        if str == fruits:
            return fruits_list[fruits]

main()