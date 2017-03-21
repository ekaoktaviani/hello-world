#include <iostream>
using namespace std;

int main () {
	// variable

	int a, b, temp;

	//proses membaca
	cout << "masukan nilai A : ";
	cin >> a;

	cout << "masukan nilai b : ";
	cin >> b;
	

	//poses tukar
	temp = b;
	a = temp;
	

	//proses tampil
	cout << "===============================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b << endl;
	return 0;
}
	