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
      cout<<"Username	:admin"<<endl;
      cout<<"Password	:akusukangoding"<<endl;
   	cout<<"Login(y/t)	:";cin>>login;
   	if(login=='y' || login=='Y'){
   		clrscr();
      	menulogin();
   	}
}
