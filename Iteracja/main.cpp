#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe powtorzen : ";
    cin >> n;
    cout << "Normalna petla" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Iteracja numer : " << i + 1 << endl;
    }
    cout << endl << "Odwrocona petla" << endl;
    for (int i = n; i > 0; i--)
    {
        cout << "Iteracja numer : " << i << endl;
    }
    cout << endl << "Petla WHILE" << endl;
    int i = 0;
    while (i++ < n)
    {
        cout << "Iteracja numer : " << i << endl;
    }
    return 0;
}
