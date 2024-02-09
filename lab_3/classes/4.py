import math

class Point():
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def show(self):
        print(f"Point coordinates: ({self.x}, {self.y})")

    def movies(self, newx, newy):
        self.x += newx
        self.y += newy

    def dist(self, point):
        newx = self.x - point.x
        newy = self.y - point.y
        distance = math.sqrt(newx ** 2 + newy ** 2)
        return distance

print("first coordinates")
x = int(input())
y = int(input())
print("second coordinates")
dx = int(input())
dy = int(input())

point = Point(x, y)
moves = Point(dx, dy)

point.show()
moves.show()

distance = point.dist(moves)
print("Distance:", distance)
