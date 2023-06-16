def main():
    time = input("What time is it? ")
    converted = convert(time)

    if converted >= 7.0 and converted <= 8.0:
        print("Breakfast time")
    elif converted >= 12.0 and converted <= 13.0:
        print("Lunch time")
    elif converted >= 18.0 and converted <= 19.0:
        print("Dinner time")


def convert(time):
    hours, minutes = time.split(":")
    if minutes.endswith("a.m."):
        minutes = minutes.replace("a.m.", "")
    if hours[0] == "0":
        hours = hours.replace("0", "")

    if minutes.endswith("p.m."):
        minutes = minutes.replace("p.m.", "")
        hours = int(hours) + 12

    minutes = round(int(minutes) * 100 / 60)
    minutes = str(minutes)
    hours = str(hours)
    time = float(hours + "." + minutes)
    return time

if __name__ == "__main__":
    main()