import 'dart:io';

void main() {
  print("Enter marks for subject 1: ");
  double subject1 = double.parse(stdin.readLineSync()!);
  print("Enter marks for subject 2: ");
  double subject2 = double.parse(stdin.readLineSync()!);
  print("Enter marks for subject 3: ");
  double subject3 = double.parse(stdin.readLineSync()!);

  double average = (subject1 + subject2 + subject3) / 3;

  if (average >= 90) {
    print("Grade: A+");
  } else if (average >= 80) {
    print("Grade: A");
  } else if (average >= 70) {
    print("Grade: B");
  } else if (average >= 60) {
    print("Grade: C");
  } else {
    print("Grade: Fail");
  }
}
