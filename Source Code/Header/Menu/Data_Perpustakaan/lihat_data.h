#include "Header/header.h"
lihatdata(){
	char nama[500][25],judul_buku[500][25],jumlah_buku[500][25];
   int n,total[500];
   ifstream Nama("Header/Menu/Data_Perpustakaan/data_nama.txt");
   ifstream Judul_buku("Header/Menu/Data_Perpustakaan/data_judul_buku.txt");
   ifstream Jumlah_buku("Header/Menu/Data_Perpustakaan/data_jumlah_buku.txt");
   ifstream Total_harga("Header/Menu/Data_Perpustakaan/data_total_harga.txt");
   cout<<"-----------------------------------------------------------------"<<endl;
   for(n=1;n>0;n++){
   	Judul_buku>>judul_buku[n];
      Jumlah_buku>>jumlah_buku[n];
      Total_harga>>total[n];
      Nama>>nama[n];
      if(Nama.eof()){
      	break;
      }cout<<n<<"\t";
      cout<<nama[n]<<"\t";
      cout<<judul_buku[n]<<"\t\t";
      cout<<jumlah_buku[n]<<"\t\t";
      cout<<total[n]<<endl;
   }cout<<"-----------------------------------------------------------------"<<endl;
}
