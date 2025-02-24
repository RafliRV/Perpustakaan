#include "Header/lihat.h"
char lagi;
int i;
void hapusdata(){
	Database.open("Data_Perpustakaan/Database.dat",ios::out|ios::in|ios::trunc);
   Data.open("Data_Perpustakaan/Jumlah_Data.txt",ios::out);
	int hapus;
   hapus_lagi:
		cout<<"Data Yang Ingin Dihapus(1,2,dst):";cin>>hapus;
   	if(hapus>n){
   		cout<<"Data Tidak Ada,Coba Lagi:";cin>>lagi;
      	if(lagi=='y' || lagi=='Y'){
   			goto hapus_lagi;
         }
      }
   for(i=1;i<jumlah_data;i++){
   	if(i==hapus){
      	continue;
      }Database<<data[i]<<endl;
	}if(jumlah_data>0){
   	jumlah_data-=1;
      Data<<jumlah_data;
   	Data.close();
   }Database.close();
}