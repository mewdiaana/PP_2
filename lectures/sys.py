# import random
import sys

# print("This is the name of the file", 
#       sys.argv[0], sys.argv[1], sys.argv[2])

if len(sys.argv) < 2:
    print("error!")
elif len(sys.argv) == 2:
    print("This is the name of the file", 
      sys.argv[0], sys.argv[1])
else:
    print("go home!")

# n = 5
# l = ["hearts", "clubs", "diamonds", "spades"]

# for i in range(n):
#     # print(random.randint(0,10))
#     print(random.choice(l))