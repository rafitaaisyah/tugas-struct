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
    
    /* code */ 
    break;  
   case '3':
   
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