//WENNY PRASTIWI
//18050623024
//MANAJEMEN INFORMATIKA

#include <iostream>

using namespace std;

int main ()
{
    int bilangan[8] = {12,24,25,30,45,100,10,13}; //variabel array beserta isinya
    int cari,jumlah=0;
    int indeks[8];
    int x,y;

    cout << "Masukan Data yang dicari : ";
    cin >> cari;

    for (x=0; x<10; x++)
    {
        if (bilangan[x] == cari)
        {
            indeks[jumlah]=x;

            jumlah=jumlah+1;

        }
    }
    cout << "Jumlah data : "<<jumlah<<endl;
    cout << "Indeks ke - ";

    for (y=0; y<jumlah; y++)
    {
        cout << indeks[y]<<" ";
    }
    return 0;
}