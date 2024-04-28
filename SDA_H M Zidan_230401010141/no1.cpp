// Name: Haidar Muhammad Zidan
// NIM: 230401010141

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, tempatTinggal, pangkat;
    int umur;
    double tabungan;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan umur: ";
    cin >> umur;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Masukkan tempat tinggal: ";
    getline(cin, tempatTinggal);

    cout << "Masukkan tabungan dalam dollar: ";
    cin >> tabungan;

    if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && tabungan > 10000000) {
        pangkat = "Don";
    } else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        pangkat = "Underboss";
    } else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && tabungan < 1000000) {
        pangkat = "Capo";
    } else {
        cout << nama << " tidak mencurigakan." << endl;
        return 0;
    }

    cout << nama << " kemungkinan adalah seorang anggota mafia dengan " << pangkat << "." << endl;

    return 0;
}