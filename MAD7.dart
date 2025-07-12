
void main() {
  int n = 10; 
  int a = 0, b = 1, c;

  print("Fibonacci Series up to $n terms:");

  for (int i = 1; i <= n; i++) {
    print(a);
    c = a + b;
    a = b; 
    b = c; 
  }
}