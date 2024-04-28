// Name: Haidar Muhammad Zidan
// NIM: 230401010141

#include <iostream>
#include <string>

using namespace std;

int main() {
    int nilaiCoding;
    string nilaiInterview;

    cout << "Masukkan nilai coding (0-100): ";
    cin >> nilaiCoding;

    cout << "Masukkan nilai interview (A/B): ";
    cin >> nilaiInterview;

    if (nilaiCoding > 80) {
        cout << "LOLOS test coding" << endl;
    } else if (nilaiCoding >= 60 && nilaiCoding <= 80) {
        cout << "DIPERTIMBANGKAN test coding" << endl;
    } else {
        cout << "GAGAL test coding" << endl;
    }

    if (nilaiInterview == "A" || nilaiInterview == "B") {
        cout << "LOLOS test interview" << endl;
    } else {
        cout << "GAGAL test interview" << endl;
    }

    if ((nilaiCoding > 80 || (nilaiCoding >= 60 && nilaiCoding <= 80)) && (nilaiInterview == "A" || nilaiInterview == "B")) {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}