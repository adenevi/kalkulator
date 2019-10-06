#include<iostream>
using namespace std;
int main (){


menu:
	system("cls");
	float nilai;
	char skor;
	
	cout<<"====================\n";
	cout<<"Grade nilai\n";
	cout<<"By ade neviyani\n";
	cout<<"====================\n";
	cout<<"\n\n";
	cout<<"masukkan nilai anda: ";
	cin>>nilai;
	if (nilai>=90 && nilai<=100){
		 skor='A';}
		 else if (nilai >100){
			 cout<<"nilai anda tidak valid\n";
			 system ("pause");
			 goto menu;
		 }
	else if (nilai>=80) {
		skor='B';
	}
	else if (nilai>=70) {
		skor='C';
	}
	else if (nilai>=60){
		skor='D';
	}
	else if (nilai<=60){
		skor='E';
	}
	char izin;
	cout<<"grade anda adalah "<<skor<<endl;
	cout<<"apakah anda ingin menggunakan grade lagi? y/t\n";
	cout<<"masukkan: ";
	cin>> izin;
	if (izin=='y'){
		goto menu;
	}
	else {
		return 0;
	}
	return 0;
}
	
	


