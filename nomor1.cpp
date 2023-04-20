#include <iostream>
using namespace std;
int main()
{

    string nama, tempat_tinggal, pangkat;
    int umur;
    double tabungan;

    cout << "Masukkan nama = ";
    cin >> nama;
    cout << "Masukkan umur = ";
    cin >> umur;
    cout << "Masukkan tabungan (dalam dollar) = ";
    cin >> tabungan;
    cout << "Masukkan tempat tinggal = ";
    cin >> tempat_tinggal;

    if (umur > 40 && (tempat_tinggal == "Nevada" || tempat_tinggal == "New York" || tempat_tinggal == "Havana") && tabungan > 10000000)
    {
        pangkat = "Don";
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    }
    else if (umur >= 25 && umur <= 40 && (tempat_tinggal == "New Jersey" || tempat_tinggal == "Manhattan" || tempat_tinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000)
    {
        pangkat = "Underboss";
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    }
    else if (umur >= 18 && umur <= 24 && (tempat_tinggal == "California" || tempat_tinggal == "Detroit" || tempat_tinggal == "Boston") && tabungan < 1000000)
    {
        pangkat = "Capo";
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    }
    else
    {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}