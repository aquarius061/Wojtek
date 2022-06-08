#include <iostream>
#include <cmath>

using namespace std;

int getSumaCyfr(int liczba)
{
    int cyfry = log10(liczba);
    cout << "Liczba cyfr : " << cyfry << endl;
    int wynik = 0;
    for (int i=cyfry; i >=0; i--)
    {
        int a = liczba / rint(pow(10,i));
        liczba -= rint(pow(10,i)) * a;
        wynik += a;
        cout << a << " liczba = " << liczba << endl;
    }
    return wynik;
}

int main()
{
    cout << "Podaj liczbe : ";
    int liczba;
    cin >> liczba;
    cout << "Suma cyfr : " << getSumaCyfr(liczba) << endl;
    return 0;
}
