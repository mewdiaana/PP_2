class Shape():
    def __init__(self):
        pass

    def Area(self):
        return 0;

class Square(Shape):
    def __init__(self, length):
        super().__init__()
        self.length = length

    def area(self):
        return self.length ** 2

shape = Shape()
i = int(input())
square = Square(i)
print("Area of Square:", square.area())
