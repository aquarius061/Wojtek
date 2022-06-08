#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>


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

int getSumaCyfrString(int liczba)
{
    char str[10];
    char c[2];
    int len = sprintf(str, "%d", liczba);
    int num = 0;
    int wynik = 0;
    for (int i = 0; i < len; i++)
    {
        c[0] = str[i];
        c[1] = '\0';
        num = atoi(c);
        wynik += num;
    }
    return wynik;
}

int main()
{
    cout << "Podaj liczbe : ";
    int liczba;
    cin >> liczba;
    cout << "Suma cyfr dla liczby (bez konswersji na string) " << liczba << " wynosi : " << getSumaCyfr(liczba) << endl;
    cout << "Suma cyfr dla liczby (z kownersja na string) " << liczba << " wynosi : " << getSumaCyfrString(liczba) << endl;
    return 0;
}
