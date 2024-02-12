string = input()

def reverse(string):
    s = ""
    hello = string.split(" ")
    new = reversed(hello)
    for x in new:
        s += x
        s += " "

    print(s)

reverse(string)
