//contoh penggunaan parameter
#include <iostream>
using namespace std ;

//prototype
int tambahkan (int a,int b);

//program utama
int main () {
	int a, b;

	cout<< " Hasil : " << tambahkan (5, 6) <<endl ;

	return 0 ;	
	}

	int tambahkan (int a, int b) {

	return a+b ;
	}