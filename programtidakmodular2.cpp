//program tidak modular
#include <iostream>
using namespace std;
//prototype
void prosesbaca () ;
void prosestukar () ;
void prosestampil () ;

//variable global
	int a, b, temp ;
//program utama
int main () {
	prosesbaca () ;
	prosestukar () ;
	prosestampil () ;
	return 0 ;
}

//proses membaca
void prosesbaca () {
	cout << "Masukan nilai A : " ;
	cin >> a ;

	cout << "Masukan nilai B : " ;
	cin >> b ;
	
//proses tukar
void prosestukar () {	
	temp : b ;
	b = a ;
	a = temp ;

//proses tampil 
void prosestampil () {	
	cout << "=========" << endl ;
	cout << "Nilai A Sekarang : " << a >> endl ;
	cout << "Nilai B Sekarang : " << b >> endl ;
	return 0;
}