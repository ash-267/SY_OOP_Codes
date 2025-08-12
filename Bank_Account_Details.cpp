#include <iostream>
#include <string>
using namespace std;
class bank_details {
	private:
	string name, acc_type;
	int acc_no;
	float balance;//, deposit_amt, withdraw_amt;
	public:
	bank_details (string n, string at, int accnum, float bal) {
		    name = n;
		    acc_type = at;
		    acc_no = accnum;
		    balance = bal;
	}
	//void accept();
	void display();
	void deposit();
	void withdraw();
};
//void bank_details::accept() {
//	cout << "Enter details of your bank account\nEnter name: ";
//	cin >> name;
//	cout << "Account type: ";
//	cin >> acc_type;
//	cout << "Enter acc number: ";
//	cin >> acc_no;
//	cout << "Enter account balance: ";
//	cin >> balance;
//}
void bank_details::display() {
	cout << "\n\nAccount details:\nName: " << name << endl;
	cout << "Account type: " << acc_type << endl;
	cout << "Account number: " << acc_no << endl;
	cout << "Bank acc balance: " << balance << endl;
}
void bank_details::deposit() {
	float deposit_amt;
	cout << "\nEnter the amount you wish to deposit: ";
	cin >> deposit_amt;
	balance += deposit_amt;
}
void bank_details::withdraw() {
	float withdraw_amt;
	cout << "\nEnter amt you wish to withdraw: ";
	cin >> withdraw_amt;
	if (withdraw_amt <= balance) {
		balance -= withdraw_amt;
	} else {
		cout << "Insufficient bank account balance!" << endl;
	}
}
int main () {
	int choice;
	//bank_details cust1;
	string name1, actp;
	int acnm;
	float blnc;
      cout << "Enter details of your bank account\nEnter name: ";
	cin >> name1;
	cout << "Account type: ";
	cin >> actp;
	cout << "Enter acc number: ";
	cin >> acnm;
	cout << "Enter account balance: ";
	cin >> blnc;
	bank_details cust2 (name1, actp, acnm, blnc);
	do {
		cout << "\nMention the operation you wish to perform:\nAnswer 1 for account details, 2 for Withdrawal \n3 for Deposit and for exit type 4" << endl;
		cin >> choice;
		switch (choice) {
				case 1: {
					cust2.display();
					break;
				}
				case 2: {
					cust2.withdraw();
					cust2.display();
					break;
				}
				case 3: {
					cust2.deposit();
					cust2.display();
					break;
				}
				case 4: {
					cout << "Thank you!!";
					break;
				}
				default: cout << "Error! Unidentified choice!" << endl;
			}
	} while (choice != 4);
	return 0;
}
