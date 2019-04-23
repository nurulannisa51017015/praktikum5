#include<iostream.h>
#include<conio.h>
void main () {
char kode;
char nama[30], *bunga;
double harga, bayar;
int jumlah;
harga = 0;
clrscr();
cout<<"          AHLISIHIR FLORIST          \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"nama pembeli                  =   ";cin>>nama;
cout<<"\n";
cout<<"input kode bunga : ";cin>>kode;
cout<<"input jumlah beli   : "; cin>>jumlah;
clrscr();
if(kode=='a') {
harga = 100000;
bunga = "Mawar";
}
else if (kode=='b') {
bunga = "Melati";
harga = 200000;
}
else if (kode=='c') {
bunga = "anggrek";
harga = 300000;  }
else if (kode=='d') {
bunga = "nusa indah";
harga = 400000;}

else{
cout<<"tidak ada kode yang sesuai";  }
cout<<"      struk pembayaran       \n";
cout<<"Nama pembeli  :   "<<nama<<"\n";
cout<<"Jenis bunga    :   "<<bunga<<"\n";
cout<<"Harga persatuan : "<<harga<<"\n";
cout<<"Jumlah beli : "<<jumlah<<"\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\tTotal harga :RP. "<<harga*jumlah<<"\n";
cout<<"\tUang bayar  :RP. "; cin>>bayar;
cout<<"\tUang kembali:RP. "<<(bayar - (harga * jumlah))<<"\n\n";
cout<<"~~~~~~~~~~TERIMA KASIH~~~~~~~~~~~~~~~~~~";
getch(); }


