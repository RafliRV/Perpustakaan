#include "Header/header.h"
menu(){
	char nama[500][25],judul_buku[500][25],jumlah_buku[500][25],total[500][25];
   ifstream Nama("Header/Menu/data_nama.txt",ios::app);
   ifstream Judul_buku("Header/Menu/data_judul_buku.txt",ios::app);
   ifstream Jumlah_buku("Header/Menu/data_jumlah_buku.txt",ios::app);
   ifstream Total_harga("Header/Menu/data_total_harga.txt",ios::app);
	cout<<"======================================================================================================================="<<endl;
   cout<<"					Daftar Menu"<<endl;
   cout<<"========================================================================================================================"<<endl;
   cout<<"------------------------------------------------------------------------"<<endl;
   cout<<"No.\tNama\tJudul Buku\tJumlah Buku\tTotal Harga Sewa"<<endl;
   cout<<"------------------------------------------------------------------------"<<endl;
}
