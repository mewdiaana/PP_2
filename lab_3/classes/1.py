class Strings_Master():
    def __init__(self):
        self.string = ""

    def getString(self):
        self.string = input("Your string:")
    
    def printString(self):
        print(self.string)

string = Strings_Master()
string.getString()
string.printString()