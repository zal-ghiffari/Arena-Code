#include <iostream>
using namespace std;

double tambah(double a, double b) {
    return a + b;
}

double kurang(double a, double b) {
    return a - b;
}

double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan!\n";
        return 0;
    }
    return a / b;
}

int main() {
    int pilihan;
    double x, y;

    do {
        cout << "\n=== KALKULATOR SEDERHANA ===\n";
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "5. Keluar\n";
        cout << "Pilih operasi (1-5): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka pertama: ";
            cin >> x;
            cout << "Masukkan angka kedua: ";
            cin >> y;
        }

        switch (pilihan) {
            case 1:
                cout << "Hasil: " << tambah(x, y) << endl;
                break;
            case 2:
                cout << "Hasil: " << kurang(x, y) << endl;
                break;
            case 3:
                cout << "Hasil: " << kali(x, y) << endl;
                break;
            case 4:
                cout << "Hasil: " << bagi(x, y) << endl;
                break;
            case 5:
                cout << "Terima kasih telah menggunakan kalkulator!\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);

    return 0;
}
