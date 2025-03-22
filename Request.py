import requests
response = requests.get("https://api.github.com")
print("GitHub API Status Code:", response.status_code)

# import os
# directory = input("Enter the directory path: ")
# print("Contents of Directory:", os.listdir(directory))