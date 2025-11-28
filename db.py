users = {"admin": "1234"}

def check_user(username, password):
    return users.get(username) == password