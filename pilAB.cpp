#include <iostream>

using namespace std;

  void PilihA ();
  void PilihB ();
  
int n, data; 
int jumlah=1;
char pilihan;


int main() {
  int min, max;
  cout << "Masukan Jumlah Data : "; cin >> n;
  pilih:
  cout << "A. Mencari data minimum"<<endl;
  cout << "B. Mencari data maximum"<<endl;
  cout << "Pilih Proses : "; cin >>pilihan;
    if (pilihan=='a') {
      PilihA();
    }
      else if (pilihan=='b') {
        PilihB();
      }
        else  {
          cout << "Pilihan yang anda masukan tidak Valid"<<endl;
          cout << "Tolong masukan pilihan A atau B"<<endl<<endl;
          goto pilih;
        }
  cin.get();
  return 0;
}

void PilihA(){
  int min; 
  for (int x=1;x<=n;x++) {
    cout<<"Masukan data : "; cin >> data;
    if (x==1) {
      min = data;
    }
      else if (min > data) {
        min = data;
        jumlah = 1;
      }
        else if (min < data) {}

          else if (min = data) {
            jumlah++;
          }
            else {}
  }
  cout << "-------------------------"<<endl;
  cout << "Data minimumnya adalah : "<<min<<endl;
  cout << "Berjumlah : "<< jumlah;
}

  void PilihB(){
    int max; 
    for (int x=1;x<=n;x++) {
      cout<<"Masukan data : "; cin >> data;
      if (x==1) {
        max = data;
      }
        else if (max < data) {
          max = data;
          jumlah = 1;
        }
          else if (max > data) {}

            else if (max = data) {
              jumlah++;
            }
              else {}
    }
    cout << "-------------------------"<<endl;
    cout << "Data maximumnya adalah : "<<max<<endl;
    cout << "Berjumlah : "<< jumlah;
  }