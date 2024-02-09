class Shape():
    def __init__(self):
        pass

    def area(self):
        return 0;

class Square(Shape):
    def __init__(self, length):
        super().__init__()
        self.length = length

    def area(self):
        return self.length ** 2

class Rectangles(Shape):
    def __init__(self, length, width):
        super().__init__()
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width
    

shape = Shape()
a = int(input())
b = int(input())
rectangle = Rectangles(a, b)
print("Area of Rectangle:", rectangle.area())


    
