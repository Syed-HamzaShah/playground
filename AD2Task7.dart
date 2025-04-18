import 'dart:io';

void main() {
  String correctUsername = "admin";
  String correctPassword = "1234";

  print("Enter username: ");
  String username = stdin.readLineSync()!;

  print("Enter password: ");
  String password = stdin.readLineSync()!;

  if (username == correctUsername && password == correctPassword) {
    print("Login successful");
  } else {
    print("Invalid credentials");
  }
}
