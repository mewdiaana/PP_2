#You are given list of numbers separated by spaces. Write a function filter_prime which will take list of numbers as an agrument and returns only prime numbers from the list.

numb = []
n=int(input())

for i in range(0, n):
    ele = int(input())
    numb.append(ele)

print("Original:", numb)

def prime(num):
    if num < 2:
        return False
    for i in range (2, int(num*0.5)+1):
        if num%i == 0:
            return False
        return num

pr_n = [prime(x) for x in numb]

print("prime:", pr_n)
        
