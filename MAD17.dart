
class Animal {
  void makeSound() {
    print("Animal makes a sound");
  }
}
class Dog extends Animal {
  @override
  void makeSound() {
    print("Dog barks");
  }
}
void main() {
  Dog myDog = Dog();
  myDog.makeSound();
}