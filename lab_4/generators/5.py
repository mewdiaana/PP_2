def down(a):
    while a>=0:
        yield a
        a -= 1
        

a = int(input())
print(*down(a))
