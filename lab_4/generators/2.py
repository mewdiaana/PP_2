def even(num):
    for i in range(num+1):
        if i%2 == 0:
            yield i

a = int(input())
print(*even(a))
