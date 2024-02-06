#Define a functino histogram() that takes a list of integers and prints a histogram to the screen.

col = list(map(int, input() .split()))

def hysto(col):
    for i in col:
        print('*'*i)

hysto(col)
