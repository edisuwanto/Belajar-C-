#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float a, b, phi, diameter, jarijari;
float luas, keliling;
int angka;
a=22;
b=7;
phi=a/b;	
cout<<"pilih 1 apabila yang diketahui adalah diameter, 2 jarijari, 3 luas, 4 keliling ";
cin>>angka;
if (angka==1)
{
	cout<<"\nmasukkan diameter";
	cin>>diameter;
	cout<<"\npilih 1 untuk mencari jarijari, 2 untuk mencari luas, 3 untuk mencari keliling";
	cin>>angka;
	if (angka==1)
	{
	cout<<"\nbesar jarijari adalah "<<0.5*diameter;
	}
	else if (angka==2)
	{
		cout<<"\nbesar luas lingkaran adalah "<<0.25*phi*pow(diameter,2);
	}
	else if (angka==3)
	{
		cout<<"\nbesar keliling lingkaran adalah "<<phi*diameter;
	}
}
	else if (angka==2)
	{
cout<<"\nmasukkan jarijari";
	cin>>jarijari;
	cout<<"\npilih 1 untuk mencari diameter, 2 untuk mencari luas, 3 untuk mencari keliling";
		cin>>angka;
		if (angka==1)
		{
			cout<<"\nbesar diameter lingkaran adalah "<<2*jarijari;
	}	
	else if (angka==2)	
	{
cout<<"\nbesar luas lingkaran adalah "<<phi*pow(jarijari,2);
	}
	else if (angka==3)
	{
cout<<"\nbesar keliling lingkaran adalah "<<2*phi*jarijari;
}
}
else if (angka==3)
{
	cout<<"\nmasukkan luas";
	cin>>luas;
	cout<<"\npilih 1 untuk mencari diameter, 2 untuk mencari jarijari, 3 untuk mencari keliling";
	cin>>angka;
	if (angka==1)
	{
		cout<<"\nbesar diameter lingkaran adalah "<<2*sqrt(luas/phi);
	}
	else if (angka==2)
	{
		cout<<"\nbesar jarijari lingkaran adalah "<<sqrt(luas/phi);
	}
	else if (angka==3)
	{
		cout<<"\nbesar keliling lingkaran adalah "<<2*phi*sqrt(luas/phi);
	}
}
else if (angka==4)
{
	cout<<"\nmasukkan keliling lingkaran";
	cin>>keliling;
	cout<<"\npilih 1 untuk mencari diameter, 2 untuk mencari jarijari, 3 untuk mencari luas";
	cin>>angka;
	if (angka==1)
	{
	cout<<"\nbesar diameter lingkaran adalah "<<keliling/phi;
		}
		else if (angka==2)
		{
			cout<<"\nbesar jarijari lingkaran adalah "<<0.5*keliling/phi;
		}
		else if (angka==3)
		{
			cout<<"\nbesar luas lingkaran adalah "<<0.25/phi*pow(keliling,2);
		} 
}
	system ("pause");
	return (0);
}
