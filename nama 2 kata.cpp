#include <iostream>
using namespace std;
int main ()
{
	string nama[5];
	int nim[5];
	float tugas[5];
	int jumlah;
	
	cout<<"masukkan jumlah";
	cin>>jumlah;
	for (int i=1;
	i<=jumlah;
	i++)
	{
		cout<<endl<<"masukkan nim";
		cin>>nim[i];
		cout<<endl<<"masukkan nama";
		cin.ignore();
		getline(cin,nama[i]);
		cout<<endl<<"masukkan nilai tugas";
		cin>>tugas[i];
		
	}
	for (int a=1;
	a<=jumlah;
	a++)
	{
		cout<<endl<<"nama : "<<nama[a];
		
	}
	system ("pause");
	return (0);
}
