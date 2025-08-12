/*Develop a program in C++ to create a database of an
employee's information system containing the following fields: Name, employee ID,
Department, Date of Joining, Contact address, Telephone number etc. Construct the database
with suitable member functions to accept and print employee details. Make use of constructor
types, destructor, static members, inline function and dynamic memory allocation using
operators-new and delete.*/
#include <iostream>
#include <string>
using namespace std;
class employee_info {
	private:
		string name, dept, contact_address;
		int emp_id, date_of_joining;
		long int tele_num;
	public:
		static int count;
		employee_info () {
			name = "0";
			dept = "0";
			contact_address = "0";
			emp_id = 0;
			date_of_joining = 0;
			tele_num = 0;
			count++;
		}
		employee_info (string n, string d, string ct, int ei, int doj, long int tn) {
			name = n;
			dept = d;
			contact_address = ct;
			emp_id = ei;
			date_of_joining = doj;
			tele_num = tn;
			count++;
			cout << "This is parameterised constructor" << endl;
		}
		employee_info (employee_info &emp) {
			name = emp.name;
			dept = emp.dept;
			contact_address = emp.contact_address;
			emp_id = emp.emp_id;
			date_of_joining = emp.date_of_joining;
			tele_num = emp.tele_num;
			count++;
			cout << "This is the copy constructor" << endl;
		}
		~employee_info() {
		    cout << "Destructor used" << endl;
		    count++;
		}
		void display();
		static void show_total_count() {
			cout << "Count: " << count << endl;
		}
};
int employee_info :: count = 0;
void employee_info::display() {
	cout << "Following is the information of the employee:" << endl;
	cout << "Name: " << name << endl;
	cout << "Employee Id: " << emp_id << endl;
	cout << "Department: " << dept << endl;
	cout << "Date of joining (ddmmyyyy): " << date_of_joining << endl;
	cout << "Contact address: " << contact_address << endl;
	cout << "Telephone number: +91 " << tele_num << "\n" << endl;
}
int main () {
	string nm, dpt, cnt_ads;
	int epid, dt_jn, tl_ph_n;
	employee_info emp1;
	emp1.display();
	cout << "Enter employee details below:" << endl;
	cout << "Enter your name: ";
	cin >> nm;
	cout << "Enter Employee Id: ";
	cin >> epid;
	cout << "Enter your department: ";
	cin >> dpt;
	cout << "Enter the date of joining (ddmmyyyy): ";
	cin >> dt_jn;
	cout << "Enter contact address: ";
	cin >> cnt_ads;
	cout << "Enter your telephone number: +91 ";
	cin >> tl_ph_n;
	cout << endl;
	employee_info emp2 (nm, dpt, cnt_ads, epid, dt_jn, tl_ph_n);
	emp2.display();
	employee_info emp3 (emp2);
	emp3.display();
	employee_info::show_total_count();
	employee_info *emp4 = new employee_info ("Arjun", "webdev", "arjun_office@gmail.com", 104, 12022023, 2468013579);
	cout << "Use of new and delete" << endl;
	emp4->display();
	delete emp4;
	return 0;
}
