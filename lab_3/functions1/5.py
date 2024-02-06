#Write a function that accepts string from user and print all permutations of that string.

string = str(input())

def all_perm(s):
    result = []
    if len(s) == 1:
        print(s)
    else:
        for i in range(len(s)):
            first = s[i]
            second = s[:i] + s[i + 1:]
            for x in all_perm(second):
                result.append(first + x)
    return result

perm = all_perm(string)
print(perm)
