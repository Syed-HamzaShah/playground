# numbers = [0,1,2,3,4,5,6,7,8,9]

# for i in range(len(numbers)):
#     print(numbers[i])

# num1 = int(input("Enter 1st number: "))
# num2 = int(input("Enter 2nd number: "))
# op = input("Enter operator: ")
# result = 0

# if op == "+":
#     result = num1 + num2
# elif op == "-":
#     result = num1 - num2
# elif op == "*":
#     result = num1 * num2
# elif op == "/":
#     result = num1 / num2
# else:
#     print("Invalid operator")

# print(result)


# n1 = int(input("Enter 1st number: "))
# n2 = int(input("Enter 2nd number: "))
# n3 = int(input("Enter 3rd number: "))

# if(n1 >= n2 and n1 >= n3):
#     print(n1, "is the largest number")
# elif(n2 >= n1 and n2 >= n3):
#     print(n2," is the greater number")
# else:
#     print(n3," is the greater number")    


# numberlist = [i for i in range(0,20,2)]
# print(numberlist)


pin = 1234
balance = 10000
attempts = 0
max_attempts = 3
while attempts < max_attempts:
    entered_pin = int(input("Enter your PIN: "))  
    if entered_pin == pin:
        print("PIN accepted.")
        while True:
            print("\nWelcome to the ATM!")
            print("1. Check Balance")
            print("2. Withdraw Money")
            print("3. Deposit Money")
            print("4. Exit")

            choice = input("Enter your choice: ")

            if choice == '1':
                print(f"Your current balance is: ${balance}")
            elif choice == '2':
                amount = float(input("Enter amount to withdraw: $"))
                if amount > balance:
                    print("Insufficient funds.")
                else:
                    balance -= amount
                    print(f"Withdrawal successful! Your new balance is: ${balance}")
            elif choice == '3':
                amount = float(input("Enter amount to deposit: $"))
                balance += amount
                print(f"Deposit successful! Your new balance is: ${balance}")
            elif choice == '4':
                print("Thank you for using the ATM. Goodbye!")
                break
            else:
                print("Invalid choice. Please try again.")
        break
    else:
        attempts += 1
        print(f"Incorrect PIN. You have {max_attempts - attempts} attempts left.")
        if attempts == max_attempts:
            print("Too many incorrect attempts. Your card has been blocked.")

