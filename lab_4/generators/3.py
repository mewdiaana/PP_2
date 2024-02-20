def div(num):
    for i in range(num+1):
        if i%3 == 0 and i%4 == 0:
            yield i

a = int(input())
print(*div(a))
