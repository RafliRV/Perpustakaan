#include "Header/header.h"
char data[500][100];
int n,pilihan,jumlah_data;
fstream Database;
fstream Data;
void lihatdata(){
	Database.open("Data_Perpustakaan/Database.txt",ios::in);
	Data.open("Data_Perpustakaan/Jumlah_Data.txt",ios::in);
	Data>>jumlah_data;
	Data.close();
   cout<<"-----------------------------------------------------------------"<<endl;
   cout<<"No.\tNama\tJudul Buku\tJumlah Buku\tTotal Harga Sewa"<<endl;
   cout<<"-----------------------------------------------------------------"<<endl;
   for(n=1;n<=jumlah_data;n++){
   	Database.getline(data[n],100);
      cout<<n<<"\t";
      cout<<data[n]<<endl;
   }Database.close();
   cout<<"-----------------------------------------------------------------"<<endl;
}
