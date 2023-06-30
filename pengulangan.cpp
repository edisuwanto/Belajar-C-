#include <iostream>
#include <math.h>
using  namespace std;
int main ()
{
string nama[50];
int jumlah, i, a;
float jumlahabsen[50], tugas[50], uts[50], uas[50], nilaiakhir[50], grade[50];

cout<<"masukkan jumlah mahasiswa";
cin>>jumlah;
for (i=1;
i<=jumlah;
i++)
{
	cout<<endl<<"masukkan nama mahasiswa";
	cin>>nama[i];
	cout<<endl<<"masukkan jumlah absen";
	cin>>jumlahabsen[i];
cout<<endl<<"masukkan nilai tugas";
cin>>tugas[i];
cout<<endl<<"masukkan nilai uts";
cin>>uts[i];
cout<<endl<<"masukkan nilai uas";
cin>>uas[i];
	}

	for (a=1;
	a<=jumlah;
	a++)
	{
		cout<<endl<<"nama : "<<nama[a];
		cout<<endl<<"jumlah absen : "<<jumlahabsen[a];
	cout<<endl<<"nilai tugas : "<<tugas[a];
	cout<<endl<<"nilai uts : "<<uts[a];
cout<<endl<<"nilai uas : "<<uas[a];
nilaiakhir[a]=jumlahabsen[a]+tugas[a]*0.2+uts[a]*0.3+uas[a]*0.4;
cout<<endl<<"nilai akhir : "<<nilaiakhir[a];
if (nilaiakhir [a]>=90)
{
	cout<<"\ngrade a+";
}
else if (nilaiakhir[a]>=80)
{
	cout<<endl<<"grade a";
}
else if (nilaiakhir[a]>=70)
{
	cout<<endl<<"grade b";
}
else if (nilaiakhir[a]>=60)
{
	cout<<endl<<"grade c";
}
else if (nilaiakhir[a]<60)
{
	cout<<endl<<"grade d";
}
}
	cout<<endl;
	system ("pause");
	return (0);
}
