#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float panjang, lebar;
	// dua baris di atas adalah deklarasi bariabel 
	int angka;
	cout<<"masukkan panjang";
	cin>>panjang;
	cout<<"\nmasukkan lebar";
	cin>>lebar;
cout<<"\npilih 1 untuk luas, 2 untuk sisi miring, 3 untuk  keliling";
cin>>angka;
if(angka ==1)
{

	cout<<"\nluasnya adalah : "<<panjang*lebar;
	cout<<endl; // untuk memberikan jarak dengan baris terakhir
}
else if(angka == 2)
{

cout<<"\nsisi miringnya adalah : "<<sqrt(pow(panjang,2)+pow(lebar,2));
}
else if (angka == 3)
{

	cout<<"\nkelilingnya adalah : "<<panjang*2+lebar*2;
}

	
	system ("pause");

	return (0);
}





