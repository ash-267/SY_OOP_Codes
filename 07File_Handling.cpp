#include <iostream>
#include <fstream>
using namespace std;
class Inventory {
	char name[50];
	int product_ID, quantity;
public:
	void getdata() {
		cout << "Enter product details:" << endl;
		cout << "Product name: ";
		cin >> name;
		cout << "Product ID: ";
		cin >> product_ID;
		cout << "Quantity: ";
		cin >> quantity;
	}
	void putdata() {
		cout << "Displaying product details:" << endl;
		cout << "Product name: " << name << endl;
		cout << "Product ID: " << product_ID << endl;
		cout << "Quantity: " << quantity << endl;
	}
};
int main () {
	Inventory Product[3];
	ofstream fout;
	fout.open("Product.txt", ios::in | ios::trunc);
	cout << "Enter details of 3 products: " << endl;
	for (int i=0; i<3; i++) {
		Product[i].getdata();
		fout.write((char*)&Product[i],sizeof(Product[i]));
	}
   fout.close();
   ifstream fin;
   fin.open("Product.txt");
   fin.seekg(0);
   cout << "The data in the file is:" << endl;
   for (int i=0; i<3; i++) {
   	fin.read((char*)&Product[i],sizeof(Product[i]));
   	Product[i].putdata();
   }
   fin.close();
	return 0;
}
