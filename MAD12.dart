// Use Map to store and display student roll number and name 

void main() {
  Map<int, String> students = {
    101: 'Hamza',
    102: 'Hassan',
    103: 'Umar',
    104: 'Faiz'
  };

  students.forEach((rollNumber, name) {
    print('Roll Number: $rollNumber, Name: $name');
  });
}