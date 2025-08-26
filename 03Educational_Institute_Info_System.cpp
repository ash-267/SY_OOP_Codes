/*Design an educational Institution that maintains a database of all staff members where the database is
segregated into a number of classes having hierarchical relationships. Define all classes with suitable
data members and required member functions to build the database and fetch individual details .*/
#include <iostream>
#include <string>
using namespace std;
class staff {
protected:
	string name, dept;
	int staff_id;
public:
	void accept();
	void display();
};
class teacher: public staff {
	string role, section;
public:
	void Taccept();
	void Tdisplay();
};
class support_staff: public staff {
	string job_profile;
public:
	void Saccept();
	void Sdisplay();
};
void staff::accept() {
	cout << "\nEnter your information below:\nEnter name: ";
	cin >> name;
	cout << "Enter your department: ";
	cin >> dept;
	cout << "Enter your staff Id: ";
	cin >> staff_id;
}
void teacher::Taccept() {
	accept();
	cout << "Your your Role: ";
	cin >> role;
	cout << "Enter your Section: ";
	cin >> section;
}
void support_staff::Saccept() {
	accept();
	cout << "Enter your area of support: ";
	cin >> job_profile;
}
void staff::display() {
	cout << "\nBelow is the information of the concerned staff member:\nName: " << name << endl;
	cout << "Department: " << dept << endl;
	cout << "Staff Id: " << staff_id << endl;
}
void teacher::Tdisplay() {
	display();
	cout << "Role: " << role << endl;;
	cout << "Section: " << section << endl;
}
void support_staff::Sdisplay() {
display();
	cout << "Area of Support: " << job_profile << endl;
}
int main () {
	int n;
	cout << "Enter the number of teachers: ";
	cin >> n;
	teacher t[n];
	for (int i=0; i < n; i++) {
		t[i].Taccept();
	}
	for (int i=0; i < n; i++) {
		t[i].Tdisplay();
	}




	n = 0;
	cout << "\nEnter the number of Support Staff members: ";
	cin >> n;
	support_staff s[i];
		
	for (int i=0; i < n; i++) {
		s[i].Saccept();
	}
	for (int i=0; i < n; i++) {
		t[i].Tdisplay();
	}


	return 0;
}
