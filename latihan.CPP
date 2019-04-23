#include<iostream.h>
#include<conio.h>

int main() {
char hari;
cout<<"PILIHAN :  "<<endl;
cout<<"A= SENIN"<<endl;
cout<<"B= SELASA"<<endl;
cout<<"C= RABU"<<endl;
cout<<"D= KAMIS"<<endl;
cout<<"E= JUMAT"<<endl;
cout<<"F= SABTU"<<endl;
cout<<"G= AHAD"<<endl;
cout<<endl;
cout<<endl;
cout<<"Masukan KOde Hari (A-G): ";cin>>hari;
if (hari=='a' || hari=='A')
cout<<"senin"<<endl;
else if (hari=='b' || hari=='B')
cout<<"selasa"<<endl;
else if (hari=='c' || hari=='C')
cout<<"rabu"<<endl;
else if (hari=='d' || hari=='D')
cout<<"kamis"<<endl;
else if (hari=='e' || hari=='E')
cout<<"jumat"<<endl;
else if (hari=='f' || hari=='F')
cout<<"sabtu"<<endl;
else if (hari=='g' || hari=='G')
cout<<"Ahad"<<endl;
else
cout<<"kode yang anda masukan salah";
getch();
return 0;
}
