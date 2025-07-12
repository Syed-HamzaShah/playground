// Abstract class with one abstract method 
abstract class Shape {
  double area();
}
// Circle class extending Shape and implementing area method
class Circle extends Shape {
  double radius;

  Circle(this.radius);

  @override
  double area() {
    return 3.14 * radius * radius;
  }
}
// Square class extending Shape and implementing area method
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