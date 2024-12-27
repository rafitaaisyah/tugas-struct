#include <iostream>
#include <conio.h>
#include <string> 
#include <limits>
using namespace std;

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

void dMenu(){
system("cls");
cout<<"Aplikasi Kelas SIKC"<<"\n";       
cout<<"1. Masukkan data"<<"\n";            
cout<<"2. Tampilkan data"<<"\n";            
cout<<"3. Perbaikan data"<<"\n";           
cout<<"4. Menghapus data"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";    
}

mahasiswa sikc[30];

int pos=-1;

void masukanData(){
pos++;
system("cls");
fflush(stdin);
cout << "masukan nim: ";
getline (cin, sikc[pos].nim);
cout << "masukan nama: ";
getline (cin, sikc[pos].nama);
cout << "masukan alamat: ";
getline (cin, sikc[pos].alamat);
cout << "masukan ipk: ";
cin >> sikc[pos].ipk;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void tampilkanData(int p){
cout << sikc[p].nim<<" , "<< sikc[p].nama<<" , "<< sikc[p].alamat<<" , "<<
sikc[p].ipk<<endl;
getch();
}

void perbaikanData(int p)
{
system("cls");
fflush(stdin);
cout << "masukan nama: ";
getline (cin, sikc[p].nama);
cout << "masukan alamat: ";
getline (cin, sikc[p].alamat);
cout << "masukan ipk: ";
cin >> sikc[p].ipk;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
   masukanData();
    break;
   case '2':
    tampilkanData(pos);
    /* code */ 
    break;  
   case '3':
    int ubahdt;
    cout << "\nMasukkan nomor mahasiswa yang ingin diperbaiki: ";
    cin >> ubahdt;
    cin.ignore();
    if (ubahdt >= 1 && ubahdt <= pos + 1) {
        perbaikanData(ubahdt - 1);  
    }

    /* code */
    break;  
   case '4':
   
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}