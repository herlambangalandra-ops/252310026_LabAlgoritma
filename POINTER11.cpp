#include <iostream>
using namespace std;

//int main()
//{
//	int ilham, Amir, *Raka;
//	ilham = 75;
//	Amir = ilham;
//	Raka = &ilham;
//	cout << "Nilai ilham = " << ilham << endl;
//	cout << "Nilai Amir = " << Amir << endl;
//	cout << "Nilai Raka = " << Raka << endl;
//	return 0;
//}

////int main()
////{
////	int yofrie = 93;
////	int *hadiansyah;
////	cout << "Nilai awal yofrie = " << yofrie << endl;
////	hadiansyah = &yofrie;
////	cout << "Nilai hadiansyah sekarang = " << *hadiansyah << endl;
////	*hadiansyah = 50;
////	cout << "Nilai hadiansyah sekarang = " << *hadiansyah << endl;
////	return 0;
//}
/* Pointer to Pointer */

int main()
{
    int ilham;
    int *raka;
    int **amir;
    int ***bob;

    ilham = 75;
    cout << "Nilai Ilham = " << ilham << endl;

    raka = &ilham;
    amir = &raka;
    bob = &amir;

    cout << "Nilai Raka Hasil Mengakses Ilham = " << *raka << endl;
    cout << "Nilai Amir Hasil Mengakses Raka = " << **amir << endl;
    cout << "Nilai Bob Hasil Mengakses Amir = " << ***bob << endl;

    return 0;
}
