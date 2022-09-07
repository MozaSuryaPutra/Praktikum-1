#include <iostream>
using namespace std;
int main(){
	string a,b,c,d;
	cout<<"masukkan npm : ";
	getline(cin,a);
	cout<<"masukkan nama : ";
	getline(cin,b);
	cout<<"masukkan alamat : ";
	getline(cin,c);
	cout<<"masukkan hobi : ";
	getline(cin,d);
	cout<<endl;
	cout<<"nama saya adalah : "<<b<<endl<<"npm saya adalah : "<<a<<endl<<"alamat saya adalah : "<<c<<endl<<" hobi saya adalah : "<<d;
	return 0;
}