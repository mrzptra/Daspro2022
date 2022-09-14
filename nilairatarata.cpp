#include <iostream>
using namespace std;

float bil1,bil2,bil3,bil4,bil5;
float ratane,jumlah_bil;
string input;

main()
{
    inputlagibosku:
    cout <<"Program mencari nilai rata rata \n";
    cout <<"Input bilangan 1 : ";
    cin>>bil1;
    cout <<"Input bilangan 2 : ";
    cin>>bil2;
    cout <<"Input bilangan 3 : ";
    cin>>bil3;
    cout <<"Input bilangan 4 : ";
    cin>>bil4;
    cout <<"Input bilangan 5 : ";
    cin>>bil5;

    jumlah_bil = bil1+bil2+bil3+bil4+bil5;
    ratane = (bil1 + bil2 + bil3 + bil4 + bil5) / 5;
    cout <<"Jadi nilai rata rata dari ke 5 bilangan tersebut adalah : "<<ratane <<endl;

    cout <<"==================================" <<endl;
    cout <<"Rumusnya adalah : " <<bil1<<"+"<<bil2<<"+"<<bil3<<"+"<<bil4<<"+"<<bil5<<" = " <<jumlah_bil <<", Kemudian dibagi 5, menjadi " <<jumlah_bil <<":5 = " <<ratane <<endl;
    if(ratane>=100)
    {
        cout << "Dan nilai " <<ratane <<" dikategorikan sebagai sangat bagus \n" ;
    }else if((ratane>=80)&&(ratane<100))
    {
        cout << "Dan nilai " <<ratane <<" dikategorikan sebagai cukup bagus \n" ;
    }else if((ratane>=60)&&(ratane<80))
    {
        cout << "Dan nilai " <<ratane <<" dikategorikan sebagai cukup \n" ;
    }else if((ratane>=40)&&(ratane<60))
    {
        cout << "Dan nilai " <<ratane <<" dikategorikan sebagai tidak cukup \n" ;
    }else
    {
        cout << " Error, tidak dalam jangkauan";
    }
    cout <<"==================================" <<endl;

    cout <<" Mau input lagi apa engga [Y/N] ? ";
    cin >> input;

   if(input=="y" || input=="Y"){
        goto inputlagibosku;
    }else{
        return 0;
    }
}

