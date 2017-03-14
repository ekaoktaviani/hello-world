#include <iostream>
#define PHI 3.14 // kostanta

using namespace std;
int main () {
	float jari_jari, luas;
	
	//kostanta
	jari_jari = 25;
	
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout<<"Data lingakaran";
	cout<<"\nJari_jari : "<<jari_jari;
	cout<<"\nLuas : "<<luas;
	cout<<"\n";
	
	return 0;
	}