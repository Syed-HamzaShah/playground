import 'dart:io';

void main() {
  print("Enter your name: ");
  String name = stdin.readLineSync()!;
  print("Enter your age: ");
  int age = int.parse(stdin.readLineSync()!);
  print("Enter your cgpa: ");
  double cgpa = double.parse(stdin.readLineSync()!);

  print("Your name is $name, your age is $age and your cgpa is $cgpa.");
}
