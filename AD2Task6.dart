import 'dart:io';

void main() {
  double totalBill = 0.0;

  for (int i = 1; i <= 5; i++) {
    print("Enter the price of item $i: ");
    double price = double.parse(stdin.readLineSync()!);
    totalBill += price;
  }

  if (totalBill > 1000) {
    double discount = totalBill * 10 / 100;
    totalBill -= discount;
  }

  print("The total bill is: \$${totalBill.toStringAsFixed(2)}");
}
