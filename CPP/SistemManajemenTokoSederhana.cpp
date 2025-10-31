#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Barang {
    int id;
    string nama;
    double harga;
};

vector<Barang> inventori;

void tambahBarang() {
    Barang b;
    cout << "Masukkan ID Barang: ";
    cin >> b.id;
    cin.ignore();
    cout << "Masukkan Nama Barang: ";
    getline(cin, b.nama);
    cout << "Masukkan Harga Barang: ";
    cin >> b.harga;
    inven
