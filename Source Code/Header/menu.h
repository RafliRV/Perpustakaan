#include "Header/tambah.h"
menu(){
	daftar_menu:
   	clrscr();
		cout<<"======================================================================================================================="<<endl;
   	cout<<"					Daftar Menu"<<endl;
   	cout<<"========================================================================================================================"<<endl;
   	lihatdata();
   	cout<<"1.Tambah Data"<<endl;
   	cout<<"2.Hapus Data"<<endl;
   	cout<<"3.Edit Data"<<endl;
   	cout<<"4.Keluar"<<endl;
   	cout<<"Pilihan Anda:";cin>>pilihan;
   	switch(pilihan){
   		case 1:
      		tambahdata();
            goto akhir;
         	break;
      	case 2:
      		hapusdata();
            goto daftar_menu;
         	break;
      	default:
         	cout<<"Pilihan Tidak Ada,Coba Lagi:";cin>>lagi;
         	if(lagi=='y' || lagi=='Y'){
   				goto daftar_menu;
         	}
   	}
      akhir:
      	cout<<"\nKembali Ke Daftar Menu:";cin>>lagi;
      	if(lagi=='y' || lagi=='Y'){
         	goto daftar_menu;
         }

}

