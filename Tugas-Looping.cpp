#include <iostream>
using namespace std;

int main() {

	int input, data;
	int jumGenap = 0, jumGanjil = 0;

	cout << "masukkan jumlah data; ";
	cin >> input;

	for (data = 0; data < input; data++) {
		if (data % 2 == 0) {
			jumGenap += data;
		}
		else {
			jumGanjil += data;
		}
	}
	cout << "Jumlah total bilangan ganjil: " << jumGanjil << endl;
	cout << "Jumlah total bilangan genap: " << jumGenap;

	return 0;

}