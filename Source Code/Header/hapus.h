#include "Header/lihat.h"
char lagi;
hapusdata(){
	Nama.open("Data_Perpustakaan/data_nama.txt",ios::out);
   Judul.open("Data_Perpustakaan/data_judul_buku.txt",ios::out);
   Jumlah.open("Data_Perpustakaan/data_jumlah_buku.txt",ios::out);
   Total.open("Data_Perpustakaan/data_total_harga.txt",ios::out);
   Data.open("Data_Perpustakaan/jumlah_data.txt",ios::out);
	int hapus,i;
   hapus_lagi:
		cout<<"Data Yang Ingin Dihapus(1,2,dst):";cin>>hapus;
   	if(hapus>n){
   		cout<<"Data Tidak Ada,Coba Lagi:";cin>>lagi;
      	if(lagi=='y' || lagi=='Y'){
   			goto hapus_lagi;
         }
      }
   for(i=1;i<=n;i++){
   	if(i==hapus){
      	continue;
      }Nama<<endl<<data.nama[i];
      Judul<<endl<<data.judul_buku[i];
      Jumlah<<endl<<data.jumlah_buku[i];
      Total<<endl<<data.total[i];
	}//Nama.close();
   Judul.close();
   Jumlah.close();
   Total.close();
   if(jumlah_data>0){
   	jumlah_data-=1;
   }Data<<jumlah_data;
   Data.close();
}