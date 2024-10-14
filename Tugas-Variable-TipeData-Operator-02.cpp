
//Nama : Adile Ikhsan Muhammad Al Masyhuri
//NIM : 24104410071

#include <iostream>
using namespace std;

int main() {

	//logika perhitungan
	int harga = 150000;
	double diskon = 12.5;
	int sum = harga * (diskon / 100);
	int result = harga - sum;

	//memanggil / menampilkan di console
	cout << "Harga: " << harga << " ribu" << endl;
	cout << "Diskon: " << diskon << endl;
	cout << "Besarnya diskon dari harga: " << sum << endl;
	cout << "Harga setelah diskon: " << result << " ribu" << endl;

	return 0;
}