#include <iostream>
using namespace std;
int main ()
{;float celcius, reamur, fahrenheit, kelvin;
int angka;
cout<<"masukkan suhu dalam celcius";
cin>>celcius;
cout<<"\npilih1 untuk mengubah menjadi reamur, 2 untuk fahrenheit, 3 untuk kelvin ";
cin>>angka;
if (angka==1)
{
cout<<"nbesar suhu dalam reamur adalah "<<0.8*celcius;
}
else if (angka==2)
{
	cout<<"\nbesar suhu dalam fahrenheit adalah "<<1.8*celcius+32;
		}
		else if (angka==3)
		{
			
			cout<<"\nbesar suhu dalam kelvin adalah "<<celcius+273;
		}
		else
		{
			cout<<"anda salah memasukkan angka";
		}
		cout<<endl;
		system ("pause");
		return (0);


}
