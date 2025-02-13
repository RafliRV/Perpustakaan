#include "Header/main.h"
menulogin(){
	char username[25],password[25],kembali;
   awal:
   	cout<<"======================================================================================================================="<<endl;
   	cout<<"					Menu Login"<<endl;
   	cout<<"========================================================================================================================"<<endl;
   	cout<<"Masukkan Username	:";gets(username);
   	cout<<"Masukkan Password	:";gets(password);
   	if(strcmp(username,"admin")==0 && (strcmp(password,"akusukangoding")==0)){
   		clrscr();
      	menu();
   	}cout<<"Kembali Ke Menu Login(y/t)	:";cin>>kembali;
   	if(kembali=='y' || kembali=='Y'){
   		clrscr();
      	goto awal;
      }
}
