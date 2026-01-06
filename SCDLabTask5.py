class Car:

    def __init__(self,model,color):
        self.model = model
        self.color = color

    def printData(self):
        print("Car Model is", self.model, "And Car Color is", self.color)

# car1 = Car("Toyota", 'Off-White')
# car1.printData()            


class CalculateArea:

    def __init__(self, length, width):
        self.length = length
        self.width = width

    def calculate(self):
        print("Area is",self.length * self.width)

# area = CalculateArea(25, 26)
# area.calculate()        


class Student:
    marks = [0, 0 , 0]
    name = "Nil"

    def setter(self):
        self.name = input("Name?")
        for i in range(0,3):
            self.marks[i] = int(input("Enter marks for subject " + str(i+1)))

    def getter(self):
        print("Name",self.name)
        for i in range(len(self.marks)):
            print(self.marks[i])

    def promoted(self):
        sumMarks = 0
        for i in range(len(self.marks)):
            sumMarks += self.marks[i]
        if(((sumMarks * 100) // len(self.marks) * 100) >= 50):
            print("Promoted")
        else:
            print("Not Promoted")    


# s1 = Student()
# s1.setter()
# s1.promoted()
# s1.getter()


class Account:

    def __init__(self, accountNumber, balance=0):
        self.accountNumber = accountNumber
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient Balance")
        else:
            self.balance -= amount

    def getBalance(self):
        print("Balance is", self.balance)

# acc1 = Account("1234567890", 5000)
# acc1.getBalance()
# acc1.deposit(2000)
# acc1.getBalance()
# acc1.withdraw(1000)
# acc1.getBalance()


class Employee:

    def __init__(self, name, id, salary):
        self.name = name
        self.id = id
        self.salary = salary

    def displayInfo(self):
        print("Name:", self.name)
        print("ID:", self.id)
        print("Salary:", self.salary)

    def CalculateAnualSalary(self):
        print("Annual Salary is", self.salary * 12)

emp1 = Employee("Hamza", "E123", 5000)
emp1.displayInfo()
emp1.CalculateAnualSalary()
