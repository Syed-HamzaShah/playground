import 'dart:io';

void main() {
  print("Enter your age: ");
  int age = int.parse(stdin.readLineSync()!);

  if (age <= 18 && age >= 0) {
    print("you cannot vote");
  } else if (age > 18 && age < 100) {
    print("you can vote");
  } else {
    print("Invalid age entered");
  }
}
