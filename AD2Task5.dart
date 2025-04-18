import 'dart:io';

void main(){

  print("Enter temprature in fahrenheit: ");
  double fahrenheit = double.parse(stdin.readLineSync()!);
  double celsius = (fahrenheit - 32) * 5/9;
  print("The temprature in celsius is $celsius");

}