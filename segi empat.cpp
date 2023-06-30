#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float panjang, lebar, diagonal, luas, keliling;
	int pilihan, opsi;
	cout<<"pilih 1 apabila yang diketahui panjang dan lebar, 2 panjang dan diagonal, 3 lebar dan diagonal, 4 panjang dan luas, 5 panjang dan keliling";
	cin>>pilihan;
	if (pilihan==1)
	{
		cout<<"\nmasukkan panjang persegi panjang";
		cin>>panjang;
		cout<<"\nmasukkan lebar persegi panjang";
		cin>>lebar;
		cout<<"\npilih 1 untuk mencari diagonal, 2 untuk mencari luas, 3 untuk mencari keliling";
		cin>>opsi;
		if (opsi==1)
		{
			cout<<"\npanjang diagonal persegi panjang adalah "<<sqrt(pow(panjang,2)+pow(lebar,2));
		}
		else if (opsi==2)
		{
		cout<<"\nbesar luas persegi panjang adalah "<<panjang*lebar;
	}
	else if (opsi==3)
	{
		cout<<"\nbesar keliling persegi panjang adalah "<<panjang*2+lebar*2;
	}
}
else if (pilihan==2)
{
	cout<<"\nmasukkan panjang persegi panjang";
	cin>>panjang;
	cout<<"\nmasukkan diagonal persegi panjang";
	cin>>diagonal;
	cout<<"\npilih 1 untuk mencari lebar, 2 untuk mencariluas, 3 untuk mencari keliling";
	cin>>opsi;
if (opsi==1)
{
	cout<<"\nbesar lebar persegi panjang adalah "<<sqrt(pow(diagonal,2)-pow(panjang,2));
}
else if (opsi==2)
{
	cout<<"\nbesar luas persegi panjang adalah "<<panjang*sqrt(pow(diagonal,2)-pow(panjang,2));
}
else if (opsi==3)
{
cout<<"\nbesar keliling persegi panjang adalah "<<2*(panjang+sqrt(pow(diagonal,2)-pow(panjang,2)));
}
}
else if (pilihan==3)
{

cout<<"\nmasukkan lebar persegi panjang";
cin>>lebar;
cout<<"\nmasukkan diagonal persegi panjang";
cin>>diagonal;
cout<<"\npilih 1 untuk mencari panjang, 2 untuk mencari luas, 3 untuk mencari keliling";
cin>>opsi;
if (opsi==1)
{
	cout<<"\nbesar panjang persegi panjang adalah "<<sqrt(pow(diagonal,2)-pow(lebar,2));
	}
	else if (opsi==2)
	{
		cout<<"\nbesar luas persegi panjang adalah "<<(sqrt(pow(diagonal,2)-pow(lebar,2)))*lebar;
	}
	else if (opsi==3)
	{
		cout<<"\nbesar keliling persegi panjang adalah "<<(sqrt(pow(diagonal,2)-pow(lebar,2)))*2+lebar*2; 
	}
}
else if (pilihan==4)
{
cout<<"\nmasukkan panjang persegi panjang";
cin>>panjang;
cout<<"\nmasukkan luas persegi panjang";	
cin>>luas;
cout<<"\npilih 1 untuk mencari lebar, 2 untuk mencari diagonal, 3 untuk mancari keliling";
cin>>opsi;
if (opsi==1)
{
	cout<<"\nbesar lebar persegi panjang adalah "<<luas/panjang;
}
else if (opsi==2)
{
	cout<<"\nbesar diagonal persegi panjang adalah "<<sqrt(pow(panjang,2)+pow(luas/panjang,2));
}
else if (opsi==3)
{
	cout<<"\nbesar keliling persegi panjang adalah "<<2*(panjang+luas/panjang);
}
}
else if (pilihan==5)
{
	cout<<"\nmasukkan panjang persegi panjang";
	cin>>panjang;
	cout<<"\nmasukkan keliling persegi panjang";
	cin>>keliling;
	cout<<"\npilih 1 untuk mencari lebar, 2 untuk mencari diagonal, 3 untuk mencari luas";
	cin>>opsi;
	if (opsi==1)
	{
		cout<<"\nbesar lebar persegi panjang adalah "<<(keliling-2*panjang)/2;
	}
	else if (opsi==2)
	{
		cout<<"\nbesar diagonal persegi panjang adalah "<<sqrt(pow(panjang,2)+pow((keliling-2*panjang)/2,2));
	}
	else if (opsi==3)
	{
cout<<"\nbesar luas persegi panjangadalah "<<panjang*(keliling-2*panjang)/2;
}
}
cout<<endl;
system ("pause");
	return (0);
}
