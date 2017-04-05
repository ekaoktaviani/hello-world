#include <iostream>

using namespace std;

	int main ()
	{
	int n,hasil=1,i;


	cout<<"\n Masukan faktorial:";
	cin >> n;

  cout<<n<<"!=";

  for(i=n;i>0;i--)
  {if(i!=1)
  cout<<i<<"x";
  else
  cout<<"1";
  hasil=hasil*i;}
  cout<<"="<<hasil;

 return 0;
 }
