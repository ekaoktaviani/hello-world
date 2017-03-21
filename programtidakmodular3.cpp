//program tidak modular
#include <iostream>
using namespace std;
//prototype
void prosesbaca () ;
int prosestambah () ;
int proseskurang () ;
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
} 
//proses tambah
int prosestambah
	return a+b ;
}	
//proses kurang
int proseskurang() {	
	int hasil ;
	hasil =a =b ;
	return hasil ;
}
	

//proses tampil 
void prosestampil () {
	cout << "Hasil tambah : " <<prosestambah()<<endl ;
	cout << "Hasil kurang : " <<proseskurang()<<endl ;
}
}