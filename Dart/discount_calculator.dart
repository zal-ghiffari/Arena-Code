import 'dart:io';

void main() {
  print("Discount calculator");
  stdout.write("Input currency : ");
  var currency = stdin.readLineSync()!;
  stdout.write("Input price : ");
  var price = int.parse(stdin.readLineSync()!);
  stdout.write("Input total item bought : ");
  var bought = int.parse(stdin.readLineSync()!);
  stdout.write("Input discount percentage : ");
  var discount = int.parse(stdin.readLineSync()!);
  var totalPrice = price * bought;
  var totalDiscount = totalPrice * discount/100;
  print("You must pay $currency ${totalPrice - totalDiscount}");
}