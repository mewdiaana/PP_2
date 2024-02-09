import random

#Write a program able to play the "Guess the number" - game, where the number to be guessed is randomly chosen between 1 and 20.
#This is how it should work when run in a terminal:

print("Hello! What is your name?")
name = str(input())

print("Well, ",name,", I am thinking of a number between 1 and 20.")
print("Take a guess.")

a = random.randrange(1, 20)
cnt = 1;

while True:
    b = int(input())
    if not b:
        break
    if a>b:
        print("Your guess is too low.")
        print("Take a guess.")
        cnt += 1
    elif a<b:
        print("Your guess is too big.")
        print("Take a guess.")
        cnt += 1
    else:
        print("Good job, KBTU! You guessed my number in ",cnt, " guesses!")
        break
    

