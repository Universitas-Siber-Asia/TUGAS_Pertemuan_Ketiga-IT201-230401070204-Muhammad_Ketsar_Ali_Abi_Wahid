#include <iostream>

using namespace std;

int main()
{
    int nomor_punggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomor_punggung;

    if (nomor_punggung % 2 == 0)
    {
        if (nomor_punggung > 50 && nomor_punggung <= 100)
        {
            cout << "Nomor punggung " << nomor_punggung << " untuk pemain yang berhak menjadi kapten tim." << endl;
        }
        else
        {
            cout << "Nomor punggung " << nomor_punggung << " untuk posisi target attacker." << endl;
        }
    }
    else
    {
        if (nomor_punggung > 90)
        {
            cout << "Nomor punggung " << nomor_punggung << " untuk posisi playmaker." << endl;
        }
        else if (nomor_punggung % 3 == 0 && nomor_punggung % 5 == 0)
        {
            cout << "Nomor punggung " << nomor_punggung << " untuk posisi keeper." << endl;
        }
        else
        {
            cout << "Nomor punggung " << nomor_punggung << " untuk posisi defender." << endl;
        }
    }

    return 0;
}
