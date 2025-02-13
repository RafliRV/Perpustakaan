#include "Header/header.h"
struct namafile{
	const char* NAMA =  "Data_Perpustakaan/data_nama.txt";
   const char* JUDUL_BUKU = "Data_Perpustakaan/data_judul_buku.txt";
   const char* JUMLAH_BUKU = "Data_Perpustakaan/data_jumlah_buku.txt";
   const char* TOTAL_HARGA = "Data_Perpustakaan/data_total_harga.txt";
   const char* NAmA =  "Data_Perpustakaan/Data_nama.txt";
   const char* JUDUL_buku = "Data_Perpustakaan/Data_judul_buku.txt";
   const char* JUMLAH_buku = "Data_Perpustakaan/Data_jumlah_buku.txt";
   const char* TOTAL_harga = "Data_Perpustakaan/Data_total_harga.txt";
};
struct perpustakaan{
	char nama[500][25];
   char jumlah_buku[500][25];
   char judul_buku[500][25];
   char total[500][25];
};
namafile file;
perpustakaan data;
int n=1,pilihan;
ifstream Nama(file.NAMA);
ifstream Judul_buku(file.JUDUL_BUKU);
ifstream Jumlah_buku(file.JUMLAH_BUKU);
ifstream Total_harga(file.TOTAL_HARGA);
ofstream NamA(file.NAmA);
ofstream Judul_Buku(file.JUDUL_buku);
ofstream Jumlah_Buku(file.JUMLAH_buku);
ofstream Total_Harga(file.TOTAL_harga);
lihatdata(){
   cout<<"-----------------------------------------------------------------"<<endl;
   cout<<"No.\tNama\tJudul Buku\tJumlah Buku\tTotal Harga Sewa"<<endl;
   cout<<"-----------------------------------------------------------------"<<endl;
   for(n=1;n>0;n++){
   	Judul_buku.getline(data.judul_buku[n],25);
      Jumlah_buku.getline(data.jumlah_buku[n],25);
      Total_harga.getline(data.total[n],25);
      Nama.getline(data.nama[n],25);
      cout<<n<<"\t";
      cout<<data.nama[n]<<"\t";
      cout<<data.judul_buku[n]<<"\t";
      if(strlen(data.judul_buku[n])<5){
      	cout<<"\t";
      }
      cout<<data.jumlah_buku[n]<<"\t\t";
      cout<<data.total[n]<<endl;
      if(Nama.eof()){
      	break;
         Judul_buku.close();
         Jumlah_buku.close();
         Total_harga.close();
         Nama.close();
      }
   }cout<<"-----------------------------------------------------------------"<<endl;
}
char lagi;
hapusdata(){
	int hapus,i=1;
   hapus_lagi:
		cout<<"Data Yang Ingin Dihapus(1,2,dst):";cin>>hapus;
   	if(hapus>n){
   		cout<<"Data Tidak Ada,Coba Lagi:";cin>>lagi;
      	if(lagi=='y' || lagi=='Y'){
   			goto hapus_lagi;
         }
      }
   for(i=1;i<=n;i++){
   	remove(Nama);
      remove(Judul_buku);
      remove(Jumlah_buku);
      remove(Total_harga);
   	if(i==hapus){
      	continue;
      }Nama<<data.nama[i]<<endl;
      Judul_Buku<<data.judul_buku[i]<<endl;
      Jumlah_Buku<<data.jumlah_buku[i]<<endl;
      Total_Harga<<data.total[i]<<endl;
      if(Nama.eof()){
      	break;
         rename(NamA,Nama);
         rename(Judul_Buku,Judul_buku);
         rename(Jumlah_Buku,Jumlah_buku);
         rename(Total_Harga,Total_harga);
         Judul_Buku.close();
         Jumlah_Buku.close();
         Total_Harga.close();
         NamA.close();
      }
   }
}
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
      		clrscr();
      		//tambahdata();
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

}

