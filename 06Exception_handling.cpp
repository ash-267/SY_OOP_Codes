#include <iostream>
using namespace std;

double accept (double num) {
	cout << "Input the number: ";
	cin >> num;
	return num;
}

double division (double num1, double num2) {
	return num1/num2;
}

int main () {
	double no1 {0}, no2 {0};
	
	double num1 = accept(no1);
	double num2 = accept(no2);
	
	try {
		if (num2 != 0) {
			cout << "The division of numbers is: " << division(num1, num2) << endl;
		} else {
			throw(num2);
		}
	}
	
	catch (double num) {
		cout << "Exception found: Division by zero: The divisor is: " << num2 << endl;
	}
	
	return 0;
}
