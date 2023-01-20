#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int a = 0;
    int b = 1;
    int c = 0;
    int wynik = 0;

    cout << "Podaj numer elementu ciagu do obliczenia: ";
    cin >> n;

    if(n < 0)
    {
        cout << "Podano nieprawidlowy numer ciagu\n";
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                wynik = a;
            }
            if(i == 1)
            {
                wynik = b;
            }
            else
            {
                c = a + b;
                a = b;
                b = c;
                wynik = c;
            }
        }

        cout << n << " element ciagu rowny jest: " << wynik << endl;
    }

    cout << "Kalkulator ciagu Fibonacciego\n";
    cout << "Kamil Abramowicz\n";
    cout << "I2S 2.1/1\n";
    return 0;
}
