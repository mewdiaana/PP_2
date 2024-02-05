#Write a program to solve a classic puzzle:
#We count 35 heads and 94 legs among the chickens and rabbits in a farm. How many rabbits and how many chickens do we have? create function: solve(numheads, numlegs):

h = 35
l = 94

def rab_chic():
    r=(l-2*h)/2
    ch = h - r
    print(r, ch)

rab_chic()
