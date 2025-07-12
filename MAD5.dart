import 'dart:io';

void main() {
  print('Enter a number:');
  String? input = stdin.readLineSync();
  
  if (input != null) {
    try {
      int number = int.parse(input);
      if (number % 2 == 0) {
        print('$number is even.');
      } else {
        print('$number is odd.');
      }
    } catch (e) {
      print('Invalid input. Please enter a valid integer.');
    }
  } else {
    print('No input provided.');
  }
}