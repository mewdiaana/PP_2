class Integer_to_Roman():
    def __init__(self, num):
        self.num = num

    def how_many(self):
        d = self.num // 10
        n = self.num % 10
        return d, n

    def Roman(self, d, n):
        line = ""

        for _ in range(d):
            line += "X"

        if n <= 3:
            for _ in range(n):
                line += "I"
        elif n == 4:
            line += "IV"
        elif n == 5:
            line += "V"
        elif n == 6:
            line += "VI"
        elif n == 7:
            line += "VII"
        elif n == 8:
            line += "VIII"
        else:
            line += "IX"

        return line

num = int(input("Integer: "))
integ = Integer_to_Roman(num)
d, n = integ.how_many()
print(integ.Roman(d, n))
