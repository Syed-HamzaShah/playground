
def squares():
    print("Squares of numbers from 1 to 10")
    for i in range(1, 11):
        print(i * i)


def count_vowels():
    s = input("Enter a string to count vowels: ")
    vowels = set("aeiouAEIOU")
    count = 0
    for ch in s:
        if ch in vowels:
            count += 1
    print("Number of vowels in the given string:", count)


def marksAboveFifty():
    marks = [34, 67, 89, 45, 51, 50, 90, 49]
    print("Marks greater than 50 from the list:")
    for m in marks:
        if m > 50:
            print(m)


def printOdd():
    print("Odd numbers between 1 and 20")
    n = 1
    while n <= 20:
        if n % 2 == 1:
            print(n)
        n += 1


def passwordPrompt():
    correct_password = "secret123"
    print("Enter the password. (Hint: it's 'secret123')")
    while True:
        pwd = input("Password: ")
        if pwd == correct_password:
            print("Password accepted.")
            break
        else:
            print("Incorrect password, try again.")


def takeInputUntilStop():
    print("Type anything (type 'stop' to finish):")
    while True:
        text = input()
        if text.lower() == "stop":
            print("Stopped taking input.")
            break
        else:
            print("You typed:", text)


def sum1toN():
    print("Calculate sum from 1 to n")
    n = input("Enter a positive integer n: ")
    n = int(n)
    total = sum(range(1, n + 1))
    print("Sum of numbers is: ", total)


squares()
count_vowels()
marksAboveFifty()
printOdd()
passwordPrompt()
takeInputUntilStop()
sum1toN()