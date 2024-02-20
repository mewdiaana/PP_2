def square(num):
    for i in range(num+1):
        yield i*i

a = int(input())
print(*square(a))
