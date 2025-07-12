import 'dart:io';

void main() {
  print('Enter temperature in Celsius:');
  String? input = stdin.readLineSync();
  
  if (input != null) {
    try {
      double celsius = double.parse(input);
      double fahrenheit = (celsius * 9 / 5) + 32;
      print('$celsius °C is equal to $fahrenheit °F');
    } catch (e) {
      print('Invalid input. Please enter a valid number.');
    }
  } else {
    print('No input provided.');
  }
}