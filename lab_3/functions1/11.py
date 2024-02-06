#Write a Python function that checks whether a word or phrase is palindrome or not.
#Note: A palindrome is word, phrase, or sequence that reads the same backward as forward, e.g., madam

s = str(input())

def pal(s):
    for i in range(len(s)//2):
        if s[i] != s[len(s) - i -1]:
            return False
    return True

print(pal(s))
