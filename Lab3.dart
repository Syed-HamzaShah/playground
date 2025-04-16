import 'dart:io';

void main() {
  print("Enter your name: ");
  String? name = stdin.readLineSync();
  print("Your name is $name\n");

  print("Enter your age: ");
  int age = int.parse(stdin.readLineSync()!);
  print("Your age is $age\n");

  print("Enter your GPA: ");
  double gpa = double.parse(stdin.readLineSync()!);
  print("Your gpa is: $gpa\n");
}
