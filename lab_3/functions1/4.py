#You are given list of numbers separated by spaces. Write a function filter_prime which will take list of numbers as an agrument and returns only prime numbers from the list.

numb = list(map(int, input().split()))

print("Original:", numb)

def prime(num):
    if num > 1:
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True
    return False

pr_n = [numb[x] for x in range(len(numb)) if prime(numb[x])]

print("Prime numbers:", pr_n)


    


        
