#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// Prosedur tanpa parameter
void tampilkanMenu() {
    cout << "\n===== DAFTAR BARANG =====\n";
    cout << "1. Sarden  : Rp15.000\n";
    cout << "2. Sabun   : Rp8.000\n";
    cout << "3. Minyak  : Rp20.000\n";
    cout << "4. Gula    : Rp18.000\n";
}

// Fungsi dengan nilai balik
int getHarga(int kode) {
    switch(kode) {
        case 1: return 15000;
        case 2: return 8000;
        case 3: return 20000;
        case 4: return 18000;
        default: return 0;
    }
}

// Fungsi dengan parameter dan nilai balik
double hitungDiskon(double total) {
    if(total >= 100000)
        return total * 0.1; // diskon 10%
    else
        return 0;
}

// Prosedur dengan parameter
void cetakStruk(double subtotal, double diskon, double pajak, double total) {
    cout << "\n===== STRUK PEMBELIAN =====\n";
    cout << "Subtotal : Rp" << subtotal << endl;
    cout << "Diskon   : Rp" << diskon << endl;
    cout << "Pajak    : Rp" << pajak << endl;
    cout << "Total    : Rp" << total << endl;

    time_t now = time(0);
    cout << "Tanggal  : " << ctime(&now);
}

int main() {
    char ulang;

    do {
        int kode, jumlah;
        double subtotal = 0;

        tampilkanMenu();

        cout << "\nPilih barang (1-4): ";
        cin >> kode;

        cout << "Jumlah beli: ";
        cin >> jumlah;

        int harga = getHarga(kode);

        // Percabangan
        if(harga == 0) {
            cout << "Kode barang tidak ditemukan!\n";
        } else {
            subtotal = harga * jumlah;

            double diskon = hitungDiskon(subtotal);
            double setelahDiskon = subtotal - diskon;

            double pajak = setelahDiskon * 0.11; // PPN 11%
            double total = setelahDiskon + pajak;

            cetakStruk(subtotal, diskon, pajak, total);
        }

        cout << "\n\nTransaksi lagi? (Y/T): ";
        cin >> ulang;

    } while(ulang == 'Y' || ulang == 'y');

    cout << "\nTerima kasih telah berbelanja.\n";

    return 0;
}