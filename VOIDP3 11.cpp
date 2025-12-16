#include <iostream>
using namespace std;


void pangkatTiga(int *x) {
    *x = (*x) * (*x) * (*x); 
}

int main() {
    int a;

    cout << "Masukkan nilai: ";
    cin >> a;

    pangkatTiga(&a);

    cout << "Hasil pangkat tiga = " << a << endl;
}
