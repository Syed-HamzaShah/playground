class Shape {
  double area() {
    return 0.0;
  }
}
class Circle extends Shape {
  double radius;

  Circle(this.radius);

  @override
  double area() {
    return 3.14 * radius * radius;
  }
}
class Square extends Shape {
  double side;

  Square(this.side);

  @override
  double area() {
    return side * side;
  }
}
void main() {
  Circle circle = Circle(5.0);
  Square square = Square(4.0);

  print('Area of Circle: ${circle.area()}');
  print('Area of Square: ${square.area()}');
}
