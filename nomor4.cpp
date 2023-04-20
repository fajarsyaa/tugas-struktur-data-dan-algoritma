#include <iostream>
using namespace std;

int main()
{
    int lama_lari, lama_pushup, lama_plank;
    int total_kalori_lari, total_kalori_pushup, total_kalori_plank;
    int total_kalori;
    string isLari, isPushup, isPlank;

    cout << " === Menghiitung Kalori ===" << endl;
    cout << "Apakah kamu telah berlari ? (y/n)";
    cin >> isLari;
    cout << "Apakah kamu telah push up ? (y/n)";
    cin >> isPushup;
    cout << "Apakah kamu telah plank ? (y/n)";
    cin >> isPlank;

    if (isLari == "y")
    {
        cout << "Masukkan lama waktu olahraga lari (dalam menit): ";
        cin >> lama_lari;
        total_kalori_lari = lama_lari * 12;
    }
    if (isPushup == "y")
    {
        cout << "Masukkan lama waktu olahraga push-up (dalam menit): ";
        cin >> lama_pushup;
        total_kalori_pushup = lama_pushup * 6.67;
    }

    if (isPlank == "y")
    {
        cout << "Masukkan lama waktu olahraga plank (dalam menit): ";
        cin >> lama_plank;
        total_kalori_plank = lama_plank * 5;
    }

    total_kalori = total_kalori_lari + total_kalori_pushup + total_kalori_plank;

    cout << "Total kalori yang terbakar: " << total_kalori << " kalori" << endl;

    return 0;
}
