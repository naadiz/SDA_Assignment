// Name: Haidar Muhammad Zidan
// NIM: 230401010141

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> activities; // Map to store activities and their calorie burn rates
    activities["lari"] = 60;     // Kalori yang terbakar setiap 5 menit
    activities["push-up"] = 200; // Kalori yang terbakar setiap 30 menit
    activities["plank"] = 5;     // Kalori yang terbakar selama 1 menit

    int totalKalori = 0;
    char lanjut;

    do {
        string aktivitas;
        int waktu;

        cout << "Masukkan aktivitas (lari/push-up/plank): ";
        cin >> aktivitas;

        cout << "Masukkan lama waktu (menit): ";
        cin >> waktu;

        if (activities.find(aktivitas) != activities.end()) {
            totalKalori += (activities[aktivitas] * waktu) / 5; // Menghitung total kalori berdasarkan waktu
        } else {
            cout << "Aktivitas tidak valid!" << endl;
        }

        cout << "Apakah ingin melanjutkan? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Total kalori yang terbakar: " << totalKalori << " kalori" << endl;

    return 0;
}