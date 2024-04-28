// Name: Haidar Muhammad Zidan
// NIM: 230401010141

#include <iostream>

using namespace std;

int main() {
    int umur;
    double tinggi;
    double tarif = 0;

    cout << "Masukkan umur anak: ";
    cin >> umur;

    if (umur < 1) {
        cout << "Dilarang masuk" << endl;
        return 0;
    } else if (umur < 3) {
        tarif = 30000;
        cout << "Masukkan tinggi anak (cm): ";
        cin >> tinggi;
        if (tinggi > 70) {
            tarif += 10000;
        }
    } else if (umur < 7) {
        tarif = 40000;
        cout << "Masukkan tinggi anak (cm): ";
        cin >> tinggi;
        if (tinggi > 120) {
            tarif += 15000;
        }
    } else if (umur < 10) {
        tarif = 50000;
        cout << "Masukkan tinggi anak (cm): ";
        cin >> tinggi;
        if (tinggi > 150) {
            tarif += 20000;
        }
    } else {
        tarif = 80000;
    }

    cout << "Tarif harga untuk anak " << umur << " tahun dengan tinggi " << tinggi << " cm adalah Rp " << tarif << endl;

    return 0;
}