from itertools import permutations

def print_permutations(s):

    perms = permutations(s)
    
    for perm in perms:
        print(''.join(perm))


string = input()
print("Permutations")
print_permutations(string)
