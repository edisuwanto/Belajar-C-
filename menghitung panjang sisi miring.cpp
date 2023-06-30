#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int panjang;
	int lebar;
	// dua baris di atas adalah deklarasi bariabel 
	cout<<"masukkan panjang";
	cin>>panjang;
	cout<<"\nmasukkan lebar";
	cin>>lebar;

	cout<<"\nluasnya adalah : "<<panjang*lebar;
	cout<<endl; // untuk memberikan jarak dengan baris terakhir
	cout<<"\nsisi miringnya adalah : "<<sqrt(pow(panjang,2)+pow(lebar,2));
	cout<<"\nkelilingnya adalah : "<<panjang*2+lebar*2;
	system ("pause");

	return (0);
}





