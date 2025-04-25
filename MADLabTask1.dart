void main() {
  String fruit = "apple";

  switch (fruit) {
    case "apple":
      print("You selected Apple.");
      break;
    case "banana":
      print("You selected Banana.");
      break;
    case "orange":
      print("You selected Orange.");
      break;
    default:
      print("Unknown fruit.");
  }
}

int multiply(int a, int b) {
  return a * b;
}

bool isEven(int num) {
  return num % 2 == 0;
}

void greetUser(String name) {
  print("Hello, $name! Welcome!");
}
