import 'dart:io';
void main() {
  print('Welcome to the Simple Calculator!');
  print('Please enter the first number:');
  double num1 = double.parse(stdin.readLineSync()!);
  print('Please enter the second number:');
  double num2 = double.parse(stdin.readLineSync()!);
  print('Choose an operation:');
  print('1. Add');
  print('2. Subtract');
  print('3. Multiply');
  print('4. Divide');
  int choice = int.parse(stdin.readLineSync()!);
  double result;

  switch (choice) {
    case 1:
      result = num1 + num2;
      print('Result: $num1 + $num2 = $result');
      break;
    case 2:
      result = num1 - num2;
      print('Result: $num1 - $num2 = $result');
      break;
    case 3:
      result = num1 * num2;
      print('Result: $num1 * $num2 = $result');
      break;
    case 4:
      if (num2 == 0) {
        print('Error: Division by zero is not allowed.');
      } else {
        result = num1 / num2;
        print('Result: $num1 / $num2 = $result');
      }
      break;
    default:
      print('Invalid choice. Please select a valid operation.');
  }
}
