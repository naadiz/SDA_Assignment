// Name: Haidar Muhammad Zidan
// NIM: 230401010141

#include <iostream>

using namespace std;

int main() {
    int nomorPunggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomorPunggung;

    if (nomorPunggung % 2 == 0) {
        if (nomorPunggung >= 50 && nomorPunggung <= 100) {
            cout << "Nomor punggung genap antara 50 - 100, digunakan untuk pemain yang berhak dipilih menjadi capten team" << endl;
        } else {
            cout << "Nomor punggung genap, digunakan untuk posisi target attacker" << endl;
        }
    } else {
        if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
            cout << "Nomor punggung ganjil kelipatan dari 3 dan 5, digunakan untuk posisi keeper" << endl;
        } else if (nomorPunggung > 90) {
            cout << "Nomor punggung ganjil lebih dari 90, digunakan untuk posisi playmaker" << endl;
        } else {
            cout << "Nomor punggung ganjil, digunakan untuk posisi defender" << endl;
        }
    }

    return 0;
}