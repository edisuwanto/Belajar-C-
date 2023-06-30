#include <iostream>
#include <math.h>
using namespace std;
int pilihan1, pilihan2, pilihan3;
float diameter, jarijari, luas, keliling;
const float phi = 3.142857143;
void garistengah()
{
	cout<<"masukkan diameter";
	cin>>diameter;
	cout<<endl<<"pilih 1 untuk mencari luas, pilih 2 untuk mencari keliling, pilih 3 untuk mencari jarijari";
	cin>>pilihan1;
	if (pilihan1==1)
	{
		cout<<endl<<"besar luas lingkaran adalah "<<0.25*pow(diameter,2)*phi;
	}
	else if (pilihan1==2)
	{
		cout<<endl<<"besar keliling lingkaran adalah "<<diameter*phi;
	}
	else if (pilihan1==3)
	{
		cout<<endl<<"besar jari jari lingkaran adalah "<<0.5*diameter;
	}
}
void radius()
{
cout<<endl<<"masukkan jari jari lingkaran";
cin>>jarijari;
cout<<endl<<"pilih 1 untuk mencari diameter, pilih 2 untuk mencari luas, pilih 3 untuk mencari keliling";
cin>>pilihan1;
if (pilihan1==1)
{
	cout<<endl<<"besar diameter lingkaran adalah "<<2*jarijari;
}
else if (pilihan1==2)
{
	cout<<endl<<"besar luas lingkaran adalah "<<pow(jarijari,2)*phi;
}
else if (pilihan1==3)
{
	cout<<endl<<"besar keliling lingkaran adalah "<<2*jarijari*phi;
}
}
void area()
{
	cout<<endl<<"masukkan luas lingkaran";
	cin>>luas;
	cout<<endl<<"pilih 1 untuk mencari diameter, pilih 2 untuk mencari jari jari, pilih 3 untuk mencari keliling";
	cin>>pilihan1;
	if (pilihan1==1)
	{
		cout<<endl<<"besar diameter lingkaran adalah "<<sqrt(luas/phi)*2;
	}	
	else if (pilihan1==2)
	{
		cout<<endl<<"besar jari jari lingkaran adalah "<<sqrt(luas/phi);
	}
	else if (pilihan1==3)
	{
		cout<<endl<<"besar keliling lingkaran adalah "<<2*sqrt(luas/phi)*phi;
	}
}
void talibusur()
{

cout<<endl<<"masukkan keliling lingkaran ";
cin>>keliling;
cout<<endl<<"pilih 1untuk mencari diameter, 2 untuk mencari jari jari, 3 untuk mencari luas";
cin>>pilihan1;
if (pilihan1==1)
{
cout<<endl<<"besar diameter lingkaran adalah "<<keliling/phi;
}
else if (pilihan1==2)
{
	cout<<endl<<"besar jari jari lingkaran adalah "<<0.5*keliling/phi;
}
else if (pilihan1==3)
{
	cout<<endl<<"besar luas lingkaran adalah "<<0.25*pow(keliling,2)/phi;
}
}

int main ()
{
	first:
	cout<<"pilih nilai yang diketahui.\n1 untuk diameter, \n2 untuk jari jari, \n3 untuk luas, \n4 untuk keliling";
	cin>>pilihan2;
	if (pilihan2==1)
	{
		second:
		garistengah();
	cout<<endl<<"pilih \n1untuk kembali ke awal \n2 untuk melakukan perhitungan lain \n3 untuk keluar";
	cin>>pilihan3;
	switch (pilihan3)
	{
		case 1:
			goto first;
			break;
			case 2:
				goto second;
				break;
				case 3:
					exit;
	}
	}
	else if (pilihan2==2)
	{
		third:
		radius();
	cout<<endl<<"pilih 1 untuk kembali ke awal \n2 untuk melakukan perhitungan lain \n3 untuk keluar";
	cin>>pilihan3;
	switch (pilihan3)
	{
		case 1:
			goto first;
			break;
			case 2:
				goto third;
				break;
				case3:
					exit;
	}
	}
	else if (pilihan2==3)
	{
		forth:
		area();
	cout<<endl<<"pilih 1 untuk kembali ke awal \n2 untuk melakukan perhitungan lain \n3 untuk keluar";
	cin>>pilihan3;
	switch (pilihan3)
	{
		case 1:
			goto first;
			break;
			case 2:
				goto forth;
				break;
				case 3:
					exit;
	}
	}
	else if (pilihan2==4)
	{
		fifth:
		talibusur();
	cout<<endl<<"pilih 1 untuk kembali ke awal \n2 untuk melakukan perhitungan lain \n3 untuk keluar";
	cin>>pilihan3;
	switch (pilihan3)
	{
		case 1:
			goto first;
			break;
			case 2:
				goto fifth;
				break;
				case 3:
					exit;
	}
	}
	system ("pause");
	return (0);
}
