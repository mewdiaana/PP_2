import dogsay
import sys

print(len(sys.argv))

if len(sys.argv) == 2:
    dogsay.dog()

# import sys
# from sayings import hello

# if len(sys.argv) == 2:
#     hello(sys.argv[1])