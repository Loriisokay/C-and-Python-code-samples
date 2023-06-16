greeting = input("Greeting: ").lower()

hello = greeting.count("hello")
h = greeting.count("h", 0, 1)

if hello:
    print("$0")
elif h:
    print("$20")
else:
    print("$100")
