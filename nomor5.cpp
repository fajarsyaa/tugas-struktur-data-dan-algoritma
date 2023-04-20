
#include <iostream>
using namespace std;

int main()
{
    bool umur;
    int tinggi;

    cout << "Masukkan Umur = ";
    cin >> umur;

    cout << "Masukkan Tinggi = ";
    cin >> tinggi;

    if (umur < 1)
    {
        cout << "Dilarang masuk";
    }
    else if (umur > 1 && umur <= 3)
    {
        if (umur >= 2 && umur <= 3)
        {
            if (tinggi > 70)
            {
                cout << "Tarif Rp.40,000";
            }
        }
        else
        {
            cout << "Tarif Rp.30,000";
        }
    }
    else if (umur > 3 && umur <= 7)
    {
        if (umur >= 4 && umur <= 7)
        {
            if (tinggi > 120)
            {
                cout << "Tarif Rp.55,000";
            }
        }
        else
        {
            cout << "Tarif Rp.40,000";
        }
    }
    else if (umur > 7 && umur <= 10)
    {
        if (umur >= 8 && umur <= 10)
        {
            if (tinggi > 150)
            {
                cout << "Tarif Rp.70,000";
            }
        }
        else
        {
            cout << "Tarif Rp.50,000";
        }
    }
    else
    {
        cout << "Tarif Rp.80,000";
    }

    return 0;
}