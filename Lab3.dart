// import 'dart:io';

// void main() {
//   print("Enter your name: ");
//   String? name = stdin.readLineSync();
//   print("Your name is $name\n");

//   print("Enter your age: ");
//   int age = int.parse(stdin.readLineSync()!);
//   print("Your age is $age\n");

//   print("Enter your GPA: ");
//   double gpa = double.parse(stdin.readLineSync()!);
//   print("Your gpa is: $gpa\n");
// }

import 'dart:io';

void main() {
  print("Enter Your Marks of 3 Subjects : ");
  double maths = double.parse(stdin.readLineSync()!);
  double urdu = double.parse(stdin.readLineSync()!);
  double eng = double.parse(stdin.readLineSync()!);
  double totalmarks = maths + eng + urdu;
  double percentage = (totalmarks / 300) * 100;
  print("Marks is $totalmarks and Percentage is $percentage %");
}
