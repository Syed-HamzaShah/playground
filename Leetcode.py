import leetcode

username = "Syed_Hamza_Shah"
client = leetcode.Client()
solved_problems = client.get_user_solved_problems(username)

print(solved_problems)