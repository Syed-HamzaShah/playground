class Student {
  int rollNumber;
  String name;

  Student(this.rollNumber, this.name);

  void displayInfo() {
    print('Roll Number: $rollNumber, Name: $name');
  }
}

void main() {
  Student student1 = Student(101, 'Hamza');
  Student student2 = Student(102, 'Hassan');
  Student student3 = Student(103, 'Umar');
  Student student4 = Student(104, 'Faiz');

  List<Student> students = [student1, student2, student3, student4];

  for (var student in students) {
    student.displayInfo();
  }
}