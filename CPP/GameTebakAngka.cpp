#include <iostream>
#include <cstdlib>   // untuk rand() dan srand()
#include <ctime>     // untuk time()
using namespace std;

int main() {
    srand(time(0)); // Mengacak angka setiap kali program dijalankan
    int angkaRahasia = rand() % 100 + 1;
    int tebakan;
    int percobaan = 0;

    cout << "=== GAME TEBAK ANGKA ===\n";
    cout << "Saya telah memilih angka antara 1 hingga 100.\n";
    cout << "Coba tebak angkanya!\n";

    do {
        cout << "Masukkan tebakanmu: ";
        cin >> tebakan;
        percobaan++;

        if (tebakan > angkaRahasia)
            cout << "Terlalu tinggi! Coba angka yang lebih kecil.\n";
        else if (tebakan < angkaRahasia)
            cout << "Terlalu rendah! Coba angka yang lebih besar.\n";
        else
            cout << "Selamat! Kamu menebak dengan benar dalam " << percobaan << " percobaan!\n";

    } while (tebakan != angkaRahasia);

    cout << "Terima kasih sudah bermain!\n";
    return 0;
}
