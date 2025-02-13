#include "Header/login.h"
main(){
	char login,kembali;
   awal:
		cout<<"======================================================================================================================="<<endl;
   	cout<<"					Selamat Datang"<<endl;
   	cout<<"========================================================================================================================"<<endl;
   	cout<<"Nama Aplikasi	:Perpustakaan"<<endl;
   	cout<<"Pengembang	:Rafli Aditya"<<endl;
   	cout<<"Tools		:Borland C++"<<endl;
   	cout<<"Login(y/t)	:";cin>>login;
   	if(login=='y' || login=='Y'){
   		clrscr();
      	menulogin();
   	}cout<<"Kembali Ke Menu Awal(y/t)	:";cin>>kembali;
   	if(kembali=='y' || kembali=='Y'){
   		clrscr();
      	goto awal;
   	}
}
