int factorialFor(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int factorialWhile(int n) {
  int result = 1;
  int i = 1;
  while (i <= n) {
    result *= i;
    i++;
  }
  return result;
}

int main() {
  int number = 5;
  
  int factFor = factorialFor(number);
  int factWhile = factorialWhile(number);
  
  print('Factorial of $number using for loop: $factFor');
  print('Factorial of $number using while loop: $factWhile');
  
  return 0;
}