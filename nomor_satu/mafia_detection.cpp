#include <iostream>
#include <string>

using namespace std;

bool isDon(string nama, int umur, string tempat_tinggal, double uang_tabungan)
{
    return (umur > 40 && (tempat_tinggal == "Nevada" || tempat_tinggal == "New York" || tempat_tinggal == "Havana") && uang_tabungan > 10000000);
}

bool isUnderboss(string nama, int umur, string tempat_tinggal, double uang_tabungan)
{
    return ((umur >= 25 && umur <= 40) && (tempat_tinggal == "New Jersey" || tempat_tinggal == "Manhattan" || tempat_tinggal == "Nevada") && (uang_tabungan >= 1000000 && uang_tabungan <= 2000000));
}

bool isCapo(string nama, int umur, string tempat_tinggal, double uang_tabungan)
{
    return ((umur >= 18 && umur <= 24) && (tempat_tinggal == "California" || tempat_tinggal == "Detroit" || tempat_tinggal == "Boston") && uang_tabungan < 1000000);
}

int main()
{
    string nama;
    int umur;
    string tempat_tinggal;
    double uang_tabungan;

    cout << "masukan nama : ";
    getline(cin, nama);
    cout << "masukan umur : ";
    cin >> umur;
    cout << "masukan tempat tinggal : ";
    cin.ignore();
    getline(cin, tempat_tinggal);
    cout << "masukan jumlah uang tabungan dalam dollar : ";
    cin >> uang_tabungan;

    if (isDon(nama, umur, tempat_tinggal, uang_tabungan))
    {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Don." << endl;
    }
    else if (isUnderboss(nama, umur, tempat_tinggal, uang_tabungan))
    {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss." << endl;
    }
    else if (isCapo(nama, umur, tempat_tinggal, uang_tabungan))
    {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Capo." << endl;
    }
    else
    {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}
