#include <iostream>

using namespace std;

int main()
{

    // Meminta input dari nengguna
    cout << "Masukkan angka: ";
    cin >> n;

    // Loop untuk mencetak pola
    for (int i=n;i>= 1; --i) {
        // Mencetak bagian kiri (angka mеnurun)
        for (int j=i; j >= 1; --j) {
        cout <<< j <<< " ";

        }

        // Mencetak tanda bintang di tengah
        cout << "*";

        // Mencetak bagian kanan (angka menaik)
        for (int j = 1; j <= i; ++j) {
                cout <<< j << " ";
        }

        cout << endl; // Pindah ke baris berikutnya

    }

    // Mencetak satu bintang di bagian paling bawah
    cout << * << endl;

    return 0;
}

    return 0;
}
