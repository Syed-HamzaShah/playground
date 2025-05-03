class Student {
  String name;
  List<int> marks;
  int totalMarks = 0;
  String grade = '';

  Student(this.name, this.marks);

  void calculateTotalAndGrade() {
    totalMarks = marks.reduce((a, b) => a + b);
    if (totalMarks >= 270) {
      grade = 'A';
    } else if (totalMarks >= 200) {
      grade = 'B';
    } else if (totalMarks >= 150) {
      grade = 'C';
    } else {
      grade = 'D';
    }
  }

  void displayReport() {
    print('Name: $name');
    print('Marks: ${marks.join(', ')}');
    print('Total Marks: $totalMarks');
    print('Grade: $grade');
    print('------------------------');
  }
}

void main() {
  List<Student> students = [
    Student('Alice', [90, 85, 95]),
    Student('Bob', [70, 65, 80]),
    Student('Charlie', [50, 60, 55]),
    Student('Diana', [95, 90, 88]),
  ];

  for (var student in students) {
    student.calculateTotalAndGrade();
    student.displayReport();
  }
}
