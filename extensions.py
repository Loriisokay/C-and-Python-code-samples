file = input("File name: ").lower().strip()
split = file.split('.')

if file.endswith('gif') or file.endswith('jpeg') or file.endswith('png'):
    print('image' + '/' + split[ - 1])
elif file.endswith('jpg'):
    print('image/jpeg')
elif file.endswith('pdf') or file.endswith("zip"):
    print("application" + "/" + split[ - 1])
elif file.endswith("txt"):
    print("text" + "/" + split[0])
else:
    print("application/octet-stream")
