void main() {
  var num = 25;
  for (int i = 0; i < num; i++) {
    if (isPrime(i)) {
      print('$i is a prime number');
    } else {
      print('$i is not a prime number');
    }
  }
}

bool isPrime(int num) {
  if (num <= 1) return true;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}
