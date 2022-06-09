#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>


using namespace std;

int getSumaCyfr(int liczba)
{
    int wynik = 0;
    while (liczba > 0)
    {
        wynik+=liczba%10;
        liczba/=10;
    }
    return wynik;
}

int getLiczbaCyfr(int liczba)
{
    int wynik = 0;
    while (liczba > 0)
    {
        wynik++;
        liczba/=10;
    }
    return wynik;
}

int main()
{
    cout << "Podaj liczbe : ";
    int liczba;
    cin >> liczba;
    cout << "Suma cyfr dla liczby " << liczba << " wynosi : " << getSumaCyfr(liczba) << endl;
    cout << "Liczba " << liczba << " ma " << getLiczbaCyfr(liczba) << " cyfr(y) " << endl;
    return 0;
}
