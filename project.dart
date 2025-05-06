import 'dart:io';

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

  void printReport() {
    print('\nReport Card for $name:');
    print('Marks: ${marks.join(', ')}');
    print('Total Marks: $totalMarks');
    print('Grade: $grade');
  }
}

void main() {
  stdout.write('Enter the number of students: ');
  int studentCount = int.parse(stdin.readLineSync()!);

  List<Student> students = [];

  for (int i = 0; i < studentCount; i++) {
    stdout.write('\nEnter name of student ${i + 1}: ');
    String name = stdin.readLineSync()!;

    List<int> marks = [];
    for (int j = 0; j < 3; j++) {
      stdout.write('Enter marks for subject ${j + 1}: ');
      int mark = int.parse(stdin.readLineSync()!);
      marks.add(mark);
    }

    Student student = Student(name, marks);
    student.calculateTotalAndGrade();
    students.add(student);
  }

  print('\n--- Student Report Cards ---');
  for (var student in students) {
    student.printReport();
  }
}
