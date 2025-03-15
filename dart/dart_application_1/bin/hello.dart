import 'dart:core';
import 'dart:io';

// void main(List<String> arguments) {
//   // print('Hello World!');

//   // var firstName = 'Hamza';
//   // String lastName = ' Shah';

//   // print(firstName + lastName);

//   // stdout.writeln("What is your name?");
//   // var name = stdin.readLineSync();
//   // print("My name is $name");

//   // datatypes
//   // int , double, string , bool
//   // dynamic

//   // int amount1 = 100;
//   // var amount2 = 200;

//   // print('Amount1: $amount1 | Amount2: $amount2 \n');

//   // double dAmount1 = 100.11;
//   // var dAmount2 = 200.22;

//   // print('dAmount1: $dAmount1 | dAmount2: $dAmount2 \n');

//   // String name1 = 'Hamza';
//   // var name2 = 'Shah';

//   // print('My name is $name1 $name2 \n');

//   // bool isItTrue1 = true;
//   // var isItTrue2 = false;

//   // print('isItTrue1: $isItTrue1 | isItTrue2: $isItTrue2 \n');

//   // dynamic weakVariable = 100;
//   // print('WeakVariable 1: $weakVariable \n');

//   // weakVariable = 'Dart Programming';
//   // print('WeakVariable 2: $weakVariable \n');

//   // weakVariable = null;
//   // print('WeakVariable 3: $weakVariable \n');

//   // var s1 = 'Single quotes work well for string literals.';
//   // var s2 = "Double quotes work just as well.";
//   // var s3 = 'It\'s easy to escape the string delimiter.';
//   // var s4 = "It's even easier to use the other delimiter.";

//   // print(s1);
//   // print(s2);
//   // print(s3);
//   // print(s4);
//   // print('');

//   //  RAW String
//   // var s = r'In a raw string, not even \n gets special treatment.';
//   // print(s);

//   // var age = 35;
//   // var str = 'My age is: $age';
//   // print(str);

//   // var s1 = '''
//   // You can create
//   // multi-line strings like this one.
//   // ''';

//   // var s2 = """This is also a
//   // multi-line string.""";

//   // print(s1);

//   // print(s2);

//   // // String -> int
//   // var one = int.parse('1');
//   // assert(one == 1);

//   // // String -> double
//   // var onePointOne = double.parse('1.1');
//   // assert(onePointOne == 1.1);

//   // //int -> String
//   // String oneAsString = 1.toString();
//   // assert(oneAsString == '1');

//   // //double -> String
//   // String piAsString = 3.14159.toStringAsFixed(2);
//   // assert(piAsString == '3.14');

//   // const aConstNum = 0; // int constant
//   // const aConstBool = true; // bool constant
//   // const aConstString = 'a constant string'; // string constant

//   // print(aConstNum);
//   // print(aConstBool);
//   // print(aConstString);

//   // print(aConstNum.runtimeType);
//   // print(aConstBool.runtimeType);
//   // print(aConstString.runtimeType);

//   // int num = null;
//   // print(num);

//   // int num = 10 + 22;
//   // num = num - 2;

//   // print(num);

//   // num = num % 5;
//   // print(num);

//   // // relational ==, !=, >=, <=
//   // if (num == 0) {
//   //   print('Zero');
//   // }

//   // num = 100;
//   // num *= 2;
//   // print(num);

//   // // unary operator
//   // ++num;
//   // num++;
//   // num += 1;
//   // num -= 1;
//   // print(num);

//   // // logical && and logical ||
//   // if (num > 200 && num < 203) {
//   //   print('201 to 202');
//   // }

//   // if (num != 100 || num == 101) {
//   //   print('num is not equal to 100');
//   // }

//   // // != Not Equal
//   // if (num != 100) {
//   //   print('num is not equal to 100');
//   // }

// }

//Null Aware Operator
// (?.), (??), (??=)

// class Num {
//   int num = 10;
// }

main() {
  // var n = Num();
  // int number;

  // // if (n != null) {
  // //   number = n.num;
  // // }

  // number = n?.num ?? 0;
  // print(number);

  // var number;
  // print(number ?? 100);
  // print(number);
  // print(number ??= 100);
  // print(number);

  // Ternary Operator
  // var x = 100;
  // var result = x % 2 == 0 ? 'Even' : 'Odd';
  // print(result);

  // Type Test
  // var x = 100;
  // if (x is int) {
  //   print('Integer');
  // }
  // else if (x is String) {
  //   print('String');
  // }
  // else {
  //   print('Not Integer');
  // }

  // var number = 100;
  // if(number % 2 == 0) {
  //   print('Even');
  // }
  // else if(number % 3 == 0) {
  //   print('Odd');
  // }
  // else {
  //   print('Confused');
  // }

  // int number = 0;
  // switch(number) {
  //   case 0:
  //     print('Even');
  //     break;
  //   case 1:
  //     print('Odd');
  //     break;
  //   default:
  //     print('Confused');
  // }

  //Standard for loop
  // for (var i = 1; i <= 10; ++i) {
  //   print(i);
  // }

  //for-in loop
  // var numbers = [1, 2, 3];
  // for (var n in numbers) {
  //   print(n);
  // }

  //forEach loop
  // var numbers = [1, 2, 3];
  // numbers.forEach((n) => print(n));

  //while loop
  // var i = 1;
  // while (i <= 10) {
  //   print(i);
  //   ++i;
  // }

  //do-while loop
  // var i = 1;
  // do {
  //   print(i);
  //   ++i;
  // } while (i <= 10);

  //break keyword
  // for (var i = 0; i < 10; ++i) {
  //   if (i > 5) break;
  //   print(i);
  // }

  //continue keyword
  // for (var i = 0; i < 10; ++i) {
  //   if (i % 2 == 0) continue;
  //   print('Odd: $i');
  // }
}
