#include <iostream>     
#define PI 3.14159      

using namespace std;

int main() {
    // Variabel
    float jariJari;     // Nilai jari-jari lingkaran
    float luas;         // Hasil perhitungan luas

    cout << "Program Menghitung Luas Lingkaran" << endl;
    cout << "Masukkan jari-jari lingkaran: ";
    
    // Masukan jari-jarinya
    cin >> jariJari;

    // Rumus luas lingkaran
    luas = PI * jariJari * jariJari;

    // Hasilnya
    cout << "Luas lingkaran dengan jari-jari " << jariJari << " cm adalah " << luas << " cm^2" << endl;

    return 0;   
}
