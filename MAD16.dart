class Circle {
  double _radius;

  Circle(this._radius);

  double get radius => _radius;

  set radius(double value) {
    if (value > 0) {
      _radius = value;
    } else {
      throw ArgumentError('Radius must be positive');
    }
  }

  double get area => 3.14 * _radius * _radius;
}

void main() {
  Circle circle = Circle(5.0);
  print('Radius: ${circle.radius}');
  print('Area: ${circle.area}');

  circle.radius = 10.0;
  print('Updated Radius: ${circle.radius}');
  print('Updated Area: ${circle.area}');
}