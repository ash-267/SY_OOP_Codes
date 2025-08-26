/*Implement a class Complex which represents the Complex Number.
Implement the following functions Using Operator Overloading:
1. Constructors ( Include all constructor types)
2. Overload operator + to add two complex numbers using member function
3. Overload operator * to multiply two complex numbers using friend function
4. Overload operators << and >> to output and accept Complex Numbers*/

#include <iostream>

using namespace std;

class complex {
	double real, imaginary;
public:
	complex () {}
	complex (double rl, double im) {
		real = rl;
		imaginary = im;
	}
	void display () {
		cout << "Displaying Complex number: " << real << " + " << imaginary << "i" << endl;
	}
	
	friend istream &operator >> (istream& ipt, complex &num) {
		cout << "Enter the complex number:" << endl;
		cout << "Real = ";
		ipt >> num.real;
		cout << "Imaginary = ";
		ipt >> num.imaginary;
		return ipt;
	}
	
	friend ostream &operator << (ostream& opt, complex &num) {
		opt << "Displaying Complex number: " << num.real << " + " << num.imaginary << "i" << endl;
		return opt;
	}
	
	complex operator + (complex num_b) {
		complex num;
		num.real = real + num_b.real;
		num.imaginary = imaginary + num_b.imaginary;
		return num;
	}
	
	friend complex operator * (complex num_b, complex num_a) {
		complex num;
		num.real = (num_a.real * num_b.real) - (num_a.imaginary * num_b.imaginary);
		num.imaginary = (num_a.real * num_b.imaginary) + (num_a.imaginary * num_b.real);
		return num;
	}
};

int main() {
	/*complex num1(3, 4.4);
	num1.display();
	complex num2(4, 7.4);
	num2.display();*/
	complex num1, num2, num3;
	
	int choice;
	do {
		cout << endl;
		cout << "Choose the operations you wish to perform (Enter the number):\n1) Accept\n2) Display\n3) Addition\n4) Multiplication \n5) Exit\nChoice: ";
		cin >> choice;
		cout << endl;
		
		switch (choice) {
			case 1: {
				cout << "Enter first complex number: " << endl;
				cin >> num1;
				cout << "\nEnter second complex number: " << endl;
				cin >> num2;
				break;
			}
			case 2: {
				cout << "First complex number is:" << endl;
				cout << num1;
				cout << "\nSecond complex number is:" << endl;
				cout << num2;
				break;
			}
			case 3: {
				num3 = num1 + num2;
				num3.display();
				break;
			}
			case 4: {
				num3 = num1 * num2;
				num3.display();
				break;
			}
			case 5: {
				cout << "thank you!" << endl;
				break;
			}
			default: cout << "Error! Incorrect Input!" << endl;
		}
	} while (choice != 5);
	 
	return 0;
}
