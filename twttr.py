def main():
    print("Output: " + transform_twits(ask_input()))

def ask_input():
    message = input("Input: ")
    return message

def transform_twits(str):
    for char in str:
        if char.lower() == 'a' or char.lower() == 'i' or char.lower() == 'e' or char.lower() == 'o' or char.lower() == 'u':
            str = str.replace(char, "")
    return str

main()