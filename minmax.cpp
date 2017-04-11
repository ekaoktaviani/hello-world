#include <iostream>
#include <conio.h>
using namespace std;

//variable global
	int a, b;
//program utama
	int main (){
	cout <<"Masukan nilai A :";
	cin >> a;
	cout <<"Masukan nilai B :";
	cin >> b; 
	cout << "--------------------" << endl;
	if (a < b) {
		cout << " Nilai Maksimum Adalah : " << "B" << endl;
		cout << " Nilai Minimum Adalah : " << "A" << endl;
	}
		else {
			cout << " Nilai Maksimum Adalah : " << "A" << endl;
			cout << " Nilai Minimum Adalah : " << "B" << endl;
		}
	getch ();
	}
		
	