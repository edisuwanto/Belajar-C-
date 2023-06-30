#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ofstream myfile;
	myfile.open ("coba.txt", ios::app);
	myfile.close();
	system ("pause");
	return (0);
}
