#include<iostream>
using namespace std;

const float PI = 3.14159;

float hitungVolumeTabung(float r, float t) {
    return PI * r * r * t;
}

int main() {
    float jariJari, tinggi;

    cout << "=== PROGRAM MENGHITUNG VOLUME TABUNG ===" << endl;
    cout << "Masukkan jari-jari alas tabung (r): ";
    cin >> jariJari;
    cout << "Masukkan tinggi tabung (t): ";
    cin >> tinggi;

    float volume = hitungVolumeTabung(jariJari, tinggi);

    cout << "\n--- Perhitungan Volume Tabung ---" << endl;
    cout << "Rumus: Volume = PI × r × r × t" << endl;
    cout << "Volume = " << PI << " × " << jariJari << " × " << jariJari << " × " << tinggi << endl;
    cout << "Hasil Volume Tabung = " << volume << " satuan volume" << endl;

    return 0;
}
