#include <iostream>
using namespace std;
template <class T>
void SelectionSort(T arr[], int n) {
	cout << "\nSorting elements of array: " << endl;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[i] < arr[j]) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Displaying sorted elements: ";
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}
int main () {
	int s1;
	cout << "How big should the integer array be?";
	cin >> s1;
	int a[s1];
	cout << "Enter " << s1 << " elements below: "<< endl;
	for (int i=0; i<s1; i++) {
		cin >> a[i];
	}
	SelectionSort(a, s1);
	int s2;
	cout << "\n\nHow big should the float array be?";
	cin >> s2;
	float b[s2];
	cout << "Enter " << s2 << " elements below: "<< endl;
	for (int i=0; i<s2; i++) {
		cin >> b[i];
	}
	SelectionSort(b, s2);
	return 0;
}
