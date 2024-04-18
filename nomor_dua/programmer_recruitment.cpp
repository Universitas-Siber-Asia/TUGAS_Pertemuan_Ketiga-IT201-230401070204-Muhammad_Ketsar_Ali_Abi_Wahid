#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nilai_coding;
    string nilai_interview;

    cout << "Masukkan nilai coding (0-100): ";
    cin >> nilai_coding;
    cout << "Masukkan nilai interview (A/B): ";
    cin >> nilai_interview;

    string hasil_coding;
    if (nilai_coding > 80)
    {
        hasil_coding = "LOLOS";
    }
    else if (nilai_coding >= 60 && nilai_coding <= 80)
    {
        hasil_coding = "DIPERTIMBANGKAN";
    }
    else
    {
        hasil_coding = "GAGAL";
    }

    string hasil_interview;
    if (nilai_interview == "A" || nilai_interview == "B")
    {
        hasil_interview = "LOLOS";
    }
    else
    {
        hasil_interview = "GAGAL";
    }

    if ((hasil_coding == "LOLOS" || hasil_coding == "DIPERTIMBANGKAN") && hasil_interview == "LOLOS")
    {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    }
    else
    {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}
