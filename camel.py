def main():
    print("snake_case: " + transform(get_input()))

def get_input():
    camel = input("camelCase: ")
    return camel

def transform(str):
    for char in str:
        if char.isupper():
            str = str.replace(char, "_" + char.lower())
    return str

main()
