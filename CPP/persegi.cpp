#include<iostream>
using namespace std;

int main() {
	int number, square;
	
	cout << "\nPlease Enter Number to find Square of it  =  ";
	cin >> number;	
	
	square = number * number;
	
	cout << "\nThe Square of the Given " << number << " = " << square;
	
 	return 0;
}