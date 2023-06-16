def convert (str):
    str = str.replace(':)', '🙂').replace(':(', '🙁')
    return str

def main ():
    user_input = input('Enter a phrase with :) or :(\n')
    print(convert(user_input))

main()

