#include "Header/header.h"
struct perpustakaan{
	char nama[500][25];
   char jumlah_buku[500][25];
   char judul_buku[500][25];
   char total[500][25];
};
perpustakaan data;
int n,pilihan,jumlah_data;
fstream Nama;
fstream Data;
fstream Judul;
fstream Jumlah;
fstream Total;
lihatdata(){
	Nama.open("Data_Perpustakaan/data_nama.txt",ios::in);
   Judul.open("Data_Perpustakaan/data_judul_buku.txt",ios::in);
   Jumlah.open("Data_Perpustakaan/data_jumlah_buku.txt",ios::in);
   Total.open("Data_Perpustakaan/data_total_harga.txt",ios::in);
   Data.open("Data_Perpustakaan/jumlah_data.txt",ios::in);
	Data>>jumlah_data;
	Data.close();
   cout<<"-----------------------------------------------------------------"<<endl;
   cout<<"No.\tNama\tJudul Buku\tJumlah Buku\tTotal Harga Sewa"<<endl;
   cout<<"-----------------------------------------------------------------"<<endl;
   for(n=0;n<=jumlah_data;n++){
   	Judul.getline(data.judul_buku[n],25);
      Jumlah.getline(data.jumlah_buku[n],25);
      Total.getline(data.total[n],25);
      Nama.getline(data.nama[n],25);
      if(n==0){
      	continue;
      }cout<<n<<"\t";
      cout<<data.nama[n]<<"\t";
      cout<<data.judul_buku[n]<<"\t";
      if(strlen(data.judul_buku[n])<10){
      	cout<<"\t";
      }cout<<data.jumlah_buku[n]<<"\t\t";
      cout<<data.total[n]<<endl;
   }Judul.close();
	Jumlah.close();
   Total.close();
   Nama.close();
   cout<<"-----------------------------------------------------------------"<<endl;
}