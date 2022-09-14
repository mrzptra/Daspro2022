#include <iostream>
using namespace std;

//deklarasi variable
int mode;
string nama,nim,fakultas,prodi,input;

//algoritma
main()
{

    awal:
    cout <<"===== Selamat datang diprogram BIODATA ===== \n";
    cout <<"Pilih mode : \n";
    cout <<"1 - Input Manual  \n";
    cout <<"2 - Input Otomatis \n";

    cout <<"Masukkan mode : ";
    cin >> mode;

    if(mode == 1)
    {
        cout <<"===== INI ADALAH BIODATA MAHASISWA ===== \n";
        cout <<"Siapa namamu ? ";
        cin >> nama;
        cout <<"Berapa nimmu ? ";
        cin >> nim;
        cout <<"Apa fakultasmu ? ";
        cin >> fakultas;
        cout <<"Apa prodimu ? ";
        cin >> prodi;
    } else if(mode == 2) {
        cout <<"===== INI ADALAH BIODATA MAHASISWA ===== \n";
        cout <<"Nama : M Reza \n";
        cout <<"NIM : A11.2022.14741 \n";
        cout <<"Fakultas : Fakultas Ilmu Komputer \n";
        cout <<"Prodi : Teknik Informatika \n";
    } else {
        cout <<"Error, Mode tidak ditemukan!!";
    }

    cout <<" Mau input lagi apa engga [Y/N]? "<<endl;
    cin >> input;

    if(input=="y" || input=="Y"){
        goto awal;
    }else{
        return 0;
    }
}

