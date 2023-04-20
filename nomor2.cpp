#include <iostream>
using namespace std;
int main()
{
    char hasil_interview;
    int nilai_test_coding;

    cout << "Masukkan nilai test coding = ";
    cin >> nilai_test_coding;
    cout << "Masukkan grade (A,B,C,D) test interview = ";
    cin >> hasil_interview;

    if ((nilai_test_coding >= 60 && nilai_test_coding <= 100) && hasil_interview == 'A' || hasil_interview == 'B' || hasil_interview == 'a' || hasil_interview == 'b')
    {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
    }
    else
    {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer ";
    }

    return 0;
}