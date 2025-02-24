#include "Header/hapus.h"
void tambahdata(){
	char nama[25],judul_buku[25];
   int jumlah_buku,total,lama,total_diskon;double diskon;
	Database.open("Data_Perpustakaan/Database.dat",ios::out);
   Data.open("Data_Perpustakaan/Jumlah_Data.txt",ios::out);
   cout<<"Masukkan Nama	:";gets(nama);
   cout<<"Judul Buku	:";gets(judul_buku);
   cout<<"Jumlah Buku	:";cin>>jumlah_buku;
   cout<<"Lama Pinjam(hari):";cin>>lama;
   if(jumlah_buku>5 && lama>7){
   	diskon=0.2;
   }else if(lama>7){
   	diskon=0.1;
   }else if(jumlah_buku>5){
   	diskon=0.1;
   }else{
   	diskon=0;
   }total_diskon=diskon*jumlah_buku*lama*1000;                                          
   total=jumlah_buku*lama*1000-total_diskon;
   cout<<"Diskon Yang Diperoleh	:"<<total_diskon;
   cout<<"\nTotal Biaya Peminjaman	:"<<total;
   for(i=1;i<=jumlah_data;i++){
   	Database<<data[i]<<endl;
	}Database<<nama<<"\t"<<judul_buku<<"\t";
   if(strlen(judul_buku)<7){
		Database<<"\t";
   }Database<<jumlah_buku<<"\t"<<total;
   jumlah_data+=1;
   Data<<jumlah_data;
   Data.close();
   Database.close();
}
