#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe iteracji : ";
    int liczba;
    cin >> liczba;
    int i = 1;
    double a = -0.3;
    double licznik = a;
    double mnoznik = 32;
    double mianownik = mnoznik;
    cout << "Iteracja 1 a = " << a << " licznik = " << licznik << " mnoznik = " << mnoznik << " mianownik " << mianownik << endl;
    while ( i < liczba )
    {
        if ( i % 2 == 1)
        {
            a = -a + 0.2;
        }
        else
        {
            a = -a - 0.2;
        }
        mnoznik /= 2;
        licznik += a;
        mianownik *= mnoznik;
        cout << "Iteracja " << i+1 << " a = " << a << " licznik = " << licznik << " mnoznik = " << mnoznik << " mianownik " << mianownik << endl;
        i++;
    }
    cout << "Wynik = " << licznik/mianownik;
    return 0;
}
