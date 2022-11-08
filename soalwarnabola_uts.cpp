/*
NIM : A11.2022.14741
NAMA : M REZA PUTRA G
SITE : RZPTRA.MY.ID
*/
#include <iostream>
using namespace std;

string nama;
char warnabola[6];
int jumlahbola,bola;
int merah=0,biru=0,kuning=0,hijau=0,ungu=0,putih=0;

main()
{
    cout <<"======================================== \n";
    cout <<"Keterangan : \n";
    cout <<"M = MERAH"; cout <<"\t U = UNGU" <<endl;
    cout <<"B = BIRU"; cout <<"\t H = HIJAU" <<endl;
    cout <<"P = PUTIH"; cout <<"\t K = KUNING" <<endl;
    cout <<"======================================== \n";
    cout <<"Input Nama siswa : ";
    cin>>nama;
    cout <<"Input Jumlah Bola : ";
    cin>>jumlahbola;
    bola=1;
    while(bola<=jumlahbola)
    {
        cout <<"--> Apa warna bola ke "<<bola <<" nya ? ";
        cin>>warnabola[6];
        bola=bola+1;

        if(warnabola[6]=='M')
        {
            merah = merah+1;

        }
        if(warnabola[6]=='B')
        {

            biru = biru+1;

        }
        if(warnabola[6]=='K')
        {

            kuning = kuning+1;
        }
        if(warnabola[6]=='H')
        {

            hijau= hijau+1;

        }
        if(warnabola[6]=='P')
        {

            putih = putih+1;

        }
        if(warnabola[6]=='U')
        {

            ungu = ungu+1;

        }
    }

    cout <<endl;
    cout <<"========> Data Tersimpan <========\n";
    cout <<"-> Merah : " <<merah <<" pcs." <<endl;
    cout <<"-> Biru : " <<biru <<" pcs." <<endl;
    cout <<"-> Kuning : " <<kuning <<" pcs." <<endl;
    cout <<"-> Putih : " <<putih <<" pcs." <<endl;
    cout <<"-> Hijau : " <<hijau <<" pcs." <<endl;
    cout <<"-> Ungu : " <<ungu <<" pcs."  <<endl;
}
