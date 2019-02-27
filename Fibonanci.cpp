//WENNY PRASTIWI
//18050623024
//MANAJEMEN INFORMATIKA

#include <iostream>

using namespace std;

int main()
{
    int a, x, fibo[100];
    fibo[1]=1;
    fibo[2]=0;

    cout << "input jumlah deret yang anda inginkan : ";
    cin >> x;

    cout << "Deret bilangan Fibonacci : ";

    for (a = 3; a <= x; a++)
    {
        fibo[a] = fibo[a-2]+fibo[a-1];
        cout << fibo[a] << " ";
    }
    return 0;
}