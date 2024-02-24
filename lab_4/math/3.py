import math

a = int(input("Input number of sides:"))
b = int(input("Input the length of a side:"))
c = b/(2 * math.tan(math.pi/a))

print("The area of the polygon is:", a*b*c/2)

    
