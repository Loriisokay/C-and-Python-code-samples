def main():
    result = check_fractions('Fraction: ')

    if result >= 99:
        print('F')
    elif result <= 1:
        print('E')
    else:
        print (f'{result}%')

def check_fractions(str):
    while True:
        try:
            fractions = input(str)
            fractions = fractions.split('/')
            fraction_1 = int(fractions[0])
            fraction_2 = int(fractions[1])
            if fraction_1 > fraction_2:
                pass
            else:
                return (round(fraction_1*100 / fraction_2))
        except (ValueError, ZeroDivisionError):
            pass


main()