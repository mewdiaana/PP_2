class Account():
    def __init__(self, owner, balance = 0):
        self.owner = owner
        self.balance = balance

    def deposit(self, money):
        if money > 0:
            self.balance += money
            print("Your balance now:", self.balance)
        else:
            pass

    def withdraw(self, draw):
        self.balance -= draw
        print("Your balance now:", self.balance)

account = Account("Diana", 1000)
print("Summ of transition:")
i = int(input())
account.deposit(i)
print("Pay the draw:")
y = int(input())
account.withdraw(y)
        
