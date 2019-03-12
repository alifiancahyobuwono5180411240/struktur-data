#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int a=1,b=1;
int TUGAS1,TUGAS2,TUGAS3;
int cari;
int jum;



struct Mahasiswa
{
    string nama;
    int nim;
    char jk;
    string jurusan;
    float rata;
}mhs[99];


void tambah_mhs(Mahasiswa)
{
        cout<<endl;
        cout<<"%======================================%"<<endl;
        cout<<"Masukkan nama Mahasiswa : ";cin>>mhs[a].nama;
        cout<<"Masukkan NIM : ";cin>>mhs[a].nim;
        cout<<"Masukkan Jenis kelamin  (L/P): ";cin>>mhs[a].jk;
        cout<<"Masukkan Jurusan: ";cin>>mhs[a].jurusan;
        cout<<"Masukkan nilai pertama: ";cin>>TUGAS1;
        cout<<"Masukkan nilai kedua: ";cin>>TUGAS2;
        cout<<"Masukkan nilai ketiga: ";cin>>TUGAS3;
        cout<<"%=======================================%"<<endl;

      jum=TUGAS1+TUGAS2+TUGAS3;
      mhs[a].rata=jum/3;
}
void cari_data(Mahasiswa){
    int plh;
            cout<<"Masukkan NIM yang akan dicari= ";cin>>plh;
    if(plh==mhs[a].nim){
            cout<<"NAMA             :" <<mhs[a].nama<<" "<<endl;
            cout<<"NIM              :" <<mhs[a].nim<<" "<<endl;
            cout<<"JURUSAN          :" <<mhs[a].jurusan<<" "<<endl;
            cout<<"JENIS KELAMIN    :" <<mhs[a].jk<<" "<<endl;
            cout<<"TUGAS1           :" <<TUGAS1<<" "<<endl;
            cout<<"TUGAS2           :" <<TUGAS2<<" "<<endl;
            cout<<"TUGAS3           :" <<TUGAS3<<" "<<endl;
    }
    else if(plh!=mhs[a].nim){
            cout<<"data tidak ditemukan"<<endl;
    }
    a++;
}


void rata_mhs(Mahasiswa)
{
    cout<<endl;
    cout<<"%=========================================% "<<endl;
    cout<<"Nilai Rata rata Tertinggi"<<endl;
    cout<<mhs[a].rata<<endl;
    cout<<endl;
    cout<<"%=========================================%"<<endl;
    system("pause");
}


int main(){
    int pilih=0;
    do {system ("cls");
        cout<<"NAMA     : ALIFIAN CAHYO BUWONO"<<endl;
        cout<<"NIM      : 5180411240"<<endl;
        cout<<"KELAS    : D "<<endl;
        cout<<endl;
        cout<<"select menu : "<<endl;
        cout<<"%================================================%"<<endl;
        cout<<"1. masukan data Mahasiswa"<<endl;
        cout<<"2. ditampilkan berdasarkan  Nilai tertinggi "<<endl;
        cout<<"3. cari berdasarkan NIM"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"%=================================================%"<<endl;
    cout<<"Pilih menu: ";cin>>pilih;
    switch(pilih)
    {   case 1:{if(b==10){cout<<"Kelas tidak tersedia"<<endl;} else{tambah_mhs(mhs[99]);};break;}
        case 2:{if(b==10){cout<<"Kelas tidak tersedia"<<endl;} else{rata_mhs(mhs[99]);};break;}
        case 3:{if(b==10){cout<<"Kelas tidak tersedia"<<endl;} else{cari_data(mhs[99]);};break;}
        case 0:{cout<<"terimakasih "<<endl;break;}
        default:cout<<"menu yang anda pilih tidak tersedia "<<endl;
         }
    system("pause");
    }
    while(pilih!=0);

}



