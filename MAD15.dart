class Car {
  String make;
  String model;

  Car(this.make, this.model);

  void startEngine() {
    print('The engine of $make $model is starting.');
  }
}

void main() {
  Car myCar = Car('Toyota', 'Corolla');
  myCar.startEngine();
}