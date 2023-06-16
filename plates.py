import math

def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    length = len(s)
    s = s.upper()
    index = 0
    first_half = ""
    second_half = ""

    for char in s:
        if char.isalpha():
            first_half += char

    index = len(first_half)

    for char in s[index:]:
        second_half += char

    if length < 2 or length > 6:
        return False
    elif s.isalpha() == True:
        return True
    elif second_half[0] == '0' or s.isalnum() == False:
        return False
    else:
        if first_half.isalpha() and second_half.isnumeric():
            return True

main()