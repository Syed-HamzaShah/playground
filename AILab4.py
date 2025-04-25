# class student:
#     def putdata(self):
#         self.name = input("Enter name: ")
#         self.age = int(input("Enter age: "))
#         self.rollno = int(input("Enter roll number: "))
#     def display(self):
#         print("Name:", self.name)
#         print("Age:", self.age)
#         print("Roll Number:", self.rollno)    


# obj = student()
# obj.putdata()
# obj.display()


# class calculator:
#     def numberadd(self):
#         self.num1 = int(input("Enter first number: "))
#         self.num2 = int(input("Enter second number: "))
#         self.result = self.num1 + self.num2
#         print("The sum is:", self.result)

#     def numbersubtract(self):
#         self.num1 = int(input("Enter first number: "))
#         self.num2 = int(input("Enter second number: "))
#         self.result = self.num1 - self.num2
#         print("The subtraction is:", self.result)

#     def numbermultiply(self):
#         self.num1 = int(input("Enter first number: "))
#         self.num2 = int(input("Enter second number: "))   
#         self.result = self.num1 * self.num2
#         print("The multiplication is:", self.result)

#     def numberdivide(self):  
#         self.num1 = int(input("Enter first number: "))
#         self.num2 = int(input("Enter second number: "))
#         if self.num2 == 0:
#             print("Division by zero is not allowed.")
#         else:
#             self.result = self.num1 / self.num2
#             print("The division is:", self.result)


# obj1 = calculator()

# switch = int(input("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: "))
# if switch == 1:
#     obj1.numberadd()
# elif switch == 2:
#     obj1.numbersubtract()
# elif switch == 3:    
#     obj1.numbermultiply()
# elif switch == 4:    
#     obj1.numberdivide()
# else:
#     print("Invalid choice.")    



# from datetime import datetime

# class LightSensorAgent:
#     def __init__(self):
#         self.light_status = "Off"

#     def percieve_and_act(self):

#         current_time = datetime.now().hour
#         if current_time < 6 or current_time >= 18:
#             self.light_status = "On"
#         else:
#             self.light_status = "Off"

#         return f"Time: {current_time}: 00 Light: {self.light_status}"        

# agent = LightSensorAgent()
# print(agent.percieve_and_act())



class Student:
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no

    def display_info(self):
        print(f"Name: {self.name}, Roll No: {self.roll_no}")

s1 = Student("Hamza", "4665-C")
s1.display_info()
