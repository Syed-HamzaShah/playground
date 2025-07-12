void main() {
  List<String> fruits = ['Apple', 'Banana', 'Cherry', 'Apple', 'Date', 'Banana'];
  
  Set<String> uniqueFruits = Set.from(fruits);
  
  List<String> uniqueFruitList = uniqueFruits.toList();
  
  print(uniqueFruitList);
}