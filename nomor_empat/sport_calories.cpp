#include <iostream>
#include <string>

using namespace std;

int main()
{
    string olahraga;
    int durasi;
    int jumlah_kalori = 0;

    cout << "Masukkan jenis olahraga (lari/push-up/plank): ";
    cin >> olahraga;
    cout << "Masukkan durasi olahraga (menit): ";
    cin >> durasi;

    
    if (olahraga == "lari")
    {
        jumlah_kalori = (durasi / 5) * 60; // 60 kalori setiap 5 menit
    }
    else if (olahraga == "push-up")
    {
        jumlah_kalori = (durasi / 30) * 200; // 200 kalori setiap 30 menit
    }
    else if (olahraga == "plank")
    {
        jumlah_kalori = durasi * 5; // 5 kalori setiap 1 menit
    }
    else
    {
        cout << "Jenis olahraga tidak valid!" << endl;
        return 1;
    }

    cout << "Setelah melakukan olahraga " << olahraga << " selama " << durasi << " menit, kamu telah membakar sebanyak " << jumlah_kalori << " kalori." << endl;

    return 0;
}
