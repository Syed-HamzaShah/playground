# Dictionary - Key-value pairs
student = {
    "name": "Syed Hamza Shah",
    "age": 21,
    "major": "Software Engineer",
}

print("Student Name:", student["name"])
student["age"] = 22  # Update value
student["grade"] = "A+"  # Add new key-value
print("Updated Student Dictionary:", student)




# Set - Unordered collection of unique items
unique_numbers = {1, 2, 3, 4}
unique_numbers.add(5)
unique_numbers.add(3)  # Will not be added again
print("Unique Numbers Set:", unique_numbers)
