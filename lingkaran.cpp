#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a, b, phi, diameter;

a=22;
	b=7;
	phi=a/b;
	int angka;
	cout<<"masukkan diameter";
	cin>>diameter;
	cout<<"\npilih 1 untuk menghitung luas, atau 2 untuk menghitung keliling";
	cin>>angka;
	if(angka==1)
	{
		cout<<"\nluasnya adalah "<<0.25*phi*pow(diameter,2);
	}
	else if(angka==2)
	{
	cout<<"\nkelilingnya adalah "<<phi*diameter;	
}
	cout<<endl;
	system ("pause");
	return (0);
	
	}
	
		


	
	

