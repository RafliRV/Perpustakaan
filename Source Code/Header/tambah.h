#include "Header/hapus.h"
tambahdata(){
	int i;
	Nama.open("Data_Perpustakaan/data_nama.txt",ios::out);
   Judul.open("Data_Perpustakaan/data_judul_buku.txt",ios::out);
   Jumlah.open("Data_Perpustakaan/data_jumlah_buku.txt",ios::out);
   Total.open("Data_Perpustakaan/data_total_harga.txt",ios::out);
   Data.open("Data_Perpustakaan/jumlah_data.txt",ios::out);
	char NAMA[25],JUDUL[25];
   int JUMLAH,TOTAL,lama,total_diskon;double diskon;
   cout<<"Masukkan Nama	:";gets(NAMA);
   cout<<"Judul Buku	:";gets(JUDUL);
   cout<<"Jumlah Buku	:";cin>>JUMLAH;
   cout<<"Lama Pinjam(hari):";cin>>lama;
   if(JUMLAH>5){
   	diskon=0.1;
   }else if(lama>7){
   	diskon=0.1;
   }else if(JUMLAH>5 && lama>7){
   	diskon=0.2;
   }total_diskon=diskon*JUMLAH*lama*1000;
   TOTAL=JUMLAH*lama*1000-total_diskon;
   cout<<"Diskon Yang Diperoleh	:"<<total_diskon;
   cout<<"\nTotal Biaya Peminjaman	:"<<TOTAL;
   for(i=1;i<=n;i++){
   	Nama<<endl<<data.nama[i];
      Judul<<endl<<data.judul_buku[i];
      Jumlah<<endl<<data.jumlah_buku[i];
      Total<<endl<<data.total[i];
	}Nama<<NAMA;
   Judul<<JUDUL;
   Jumlah<<JUMLAH;
   Total<<TOTAL;
   jumlah_data+=1;
   Data<<jumlah_data;
   Nama.close();
   Judul.close();
   Jumlah.close();
   Total.close();
   Data.close();
}
