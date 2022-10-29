import 'dart:io';

void main() {
  print("Enter a date");
  stdout.write("year : ");
  var year = int.parse(stdin.readLineSync()!);
  stdout.write("month : ");
  var month = int.parse(stdin.readLineSync()!);
  stdout.write("date : ");
  var day = int.parse(stdin.readLineSync()!);
  var today = DateTime.now();
  var daysTo = DateTime(year, month, day).difference(today).inDays;
  print("$daysTo days to $day-$month-$year");
}