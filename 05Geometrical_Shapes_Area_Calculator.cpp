/*Geometrical Shapes Area calculator
 * Define the base class Shape with two data members of any numeric type that are employed to
 * compute the area of respective shape. Add member functions to input the data members
 * values and display the area in base class only. Derive two classes from base class namely,
 * Triangle & Rectangle. Take the display function as virtual in base class and redefine it in the
 * derived classes. Using above classes , write a program to accept parameters for triangle or
 * rectangle and display the area Using Virtual Functions.*/

#include <iostream>
using namespace std;

class Shape {
public:
	int a, b;
	void getdata() {
		cout << "\nEnter the parameters of the shape:" << endl;
		cout << "First parameter: ";
		cin >> a;
		cout << "Second parameter: ";
		cin >> b;
	}
	virtual void display() {}
};

class Triangle : public Shape {
public:
	void display() {
		cout << "Area of triangle is: " << 0.5*a*b << "\n" << endl;
	}
};

class Rectangle : public Shape {
public:
	void display() {
		cout << "Area of rectangle is: " << a*b << "\n" << endl;
	}
};

int main() {
	int choice {0};
    
    do {
        cout << "Choose the shape:\n  1. Triangle\n  2. Rectangle\n  3. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                Shape* s1;
                Triangle t;
                s1 = &t;
                s1->getdata();
                s1->display();
                cout << endl;
                break;
            }
            case 2: {
                Shape* s2;
                Rectangle r;
                s2 = &r;
                s2->getdata();
                s2->display();
                cout << endl;
                break;
            }
            case 3: {
                cout << "Thank you for using area calculator!" << "\n" << endl;
                break;
            }
            default: {
                cout << "Invalid Input!" << "\n" << endl;
            }
        }
    } while (choice != 3);
    
	return 0;
}
