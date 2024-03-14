// prjiqbal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[9];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan  Elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) { //step1
		temp = arr[i]; //step 2
		j = i; //step3
		while (j >= 0 && arr[j] > temp) //step 4
		{
			arr[j + 1] = arr[j]; //step 4a
			j--; //step 4b
		}
		arr[j + 1] = temp; //step 5

	}

void display(); {
		cout << endl;
		cout << "====================" << endl;
		cout << "Element Array yang telah tersusun" << endl;
		cout << "====================" << endl;
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << arr[j];
			if (j < n - 1) {
				cout << " --> ";
			}
		}
		cout << endl;
		cout << endl;
		cout << "Jumlah pass = " << n - 1 << endl;
		cout << endl;
}
	



int main() {
	input();
	insertionSort();
	display();

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
