#include <iostream>

using namespace std;

double wyrazCiagu(int n)
{
    double ka1 = 0.25;
    double ka2 = 0.5;
    double wynik = 0;
    if (n == 1)
    {
        return ka1;
    }
    if (n==2)
    {
        return ka2;
    }
    if ( n > 2)
    {
        int i = 3;
        do
        {
            wynik = ka2 + 2 * ka1;
            ka1 = ka2;
            ka2 = wynik;
            i++;
        } while (i<=n);
    }
    return wynik;
}

int main()
{
    int wyraz;
    cout << "Podaj ktory wyraz ciagu chcesz obliczyc : ";
    cin >> wyraz;
    for (int i=1; i < 10; i++)
    {
        cout << i << " ciagu jest rowny " << wyrazCiagu(i) << endl;
    }
    cout << "---------------------------------------" << endl << wyraz << " ciagu jest rowny " << wyrazCiagu(wyraz);
    return 0;
}
