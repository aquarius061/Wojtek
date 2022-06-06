#include <iostream>

using namespace std;

int main()
{
    int liczba;
    int zlozona = 0;
    cout << "Podaj liczbe do sprawdzenia : ";
    cin >> liczba;
    int i = 2;
    while (!zlozona && i < liczba)
    {
        if ( liczba % i == 0 )
        {
            zlozona = 1;
        }
        i++;
    }
    cout << "Liczba " << liczba;
    if (zlozona)
    {
        cout << " nie";
    }
    cout << " jest liczba pierwsza";
    return 0;
}
