#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    int tab[11];
    int n, a;
    plik.open("dane.txt", ios::out);
  //  plik.open("liczby.txt", ios::out);
    srand( time( NULL ) );

    for(int i=1;i<=10;i++)
    {
        tab[i]=0;
    }

    cin>>n;

    for(int i=0;i<n;i++)
    {
        a = (rand()%10)+1;
        tab[a]++;
        plik<<a<<endl;
    }
    plik.close();
    plik.open("liczby.txt", ios::out);


    for(int i=1;i<=10;i++)
    {
        plik<<i<<": "<<tab[i]<<endl;
    }
    plik.close();
    return 0;
}
