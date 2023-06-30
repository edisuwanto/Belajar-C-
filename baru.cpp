#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float a, b, phi, diameter, jarijari;
float luas, keliling;
int angka, navigasi;
a=22;
b=7;
phi=a/b;	
first:
cout<<"pilih 1 apabila yang diketahui adalah diameter, 2 jarijari, 3 luas, 4 keliling ";
cin>>angka;
if (angka==1)
{
	cout<<"\nmasukkan diameter";
	cin>>diameter;
	second:
	cout<<"\npilih 1 untuk mencari jarijari, 2 untuk mencari luas, 3 untuk mencari keliling";
	cin>>angka;
	if (angka==1)
	{
	cout<<"\nbesar jarijari adalah "<<0.5*diameter;
	cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, pilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
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
	else if (angka==2)
	{
		cout<<"\nbesar luas lingkaran adalah "<<0.25*phi*pow(diameter,2);
	cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
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
	else if (angka==3)
	{
		cout<<"\nbesar keliling lingkaran adalah "<<phi*diameter;
	cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
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
}
	else if (angka==2)
	{
cout<<"\nmasukkan jarijari";
	cin>>jarijari;
	third:
	cout<<"\npilih 1 untuk mencari diameter, 2 untuk mencari luas, 3 untuk mencari keliling";
		cin>>angka;
		if (angka==1)
		{
			cout<<"\nbesar diameter lingkaran adalah "<<2*jarijari;
	cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
	{
		case 1:
			goto first;
			break;
			case 2:
				goto third;
				break;
				case 3:
					exit;
	}
	}	
	else if (angka==2)	
	{
cout<<"\nbesar luas lingkaran adalah "<<phi*pow(jarijari,2);
	cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
	{
		case 1:
			goto first;
			break;
			case 2:
				goto third;
				break;
				case 3:
					exit;
	}
	}
	else if (angka==3)
	{
cout<<"\nbesar keliling lingkaran adalah "<<2*phi*jarijari;
cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
	{
		case 1:
			goto first;
			break;
			case 2:
				goto third;
				break;
				case 3:
					exit;
	}
}
}
else if (angka==3)
{
	cout<<"\nmasukkan luas";
	cin>>luas;
	forth:
	cout<<"\npilih 1 untuk mencari diameter, 2 untuk mencari jarijari, 3 untuk mencari keliling";
	cin>>angka;
	if (angka==1)
	{
		cout<<"\nbesar diameter lingkaran adalah "<<2*sqrt(luas/phi);
	cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
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
	else if (angka==2)
	{
		cout<<"\nbesar jarijari lingkaran adalah "<<sqrt(luas/phi);
	cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
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
	else if (angka==3)
	{
		cout<<"\nbesar keliling lingkaran adalah "<<2*phi*sqrt(luas/phi);
cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
	cin>>navigasi;
	switch (navigasi)
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
}
else if (angka==4)
{
	cout<<"\nmasukkan keliling lingkaran";
	cin>>keliling;
	fifth:
	cout<<"\npilih 1 untuk mencari diameter, 2 untuk mencari jarijari, 3 untuk mencari luas";
	cin>>angka;
	if (angka==1)
	{
	cout<<"\nbesar diameter lingkaran adalah "<<keliling/phi;
		cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
		cin>>navigasi;
	switch (navigasi)
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
		else if (angka==2)
		{
			cout<<"\nbesar jarijari lingkaran adalah "<<0.5*keliling/phi;
		cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
		cin>>navigasi;
	switch (navigasi)
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
		else if (angka==3)
		{
			cout<<"\nbesar luas lingkaran adalah "<<0.25/phi*pow(keliling,2);
		cout<<endl<<"pilih 1 untuk kembali ke awal, \npilih 2 untuk melakukan perhitungan lain, \npilih 3 untuk keluar";
		cin>>navigasi;
	switch (navigasi)
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
}
	system ("pause");
	return (0);
}
