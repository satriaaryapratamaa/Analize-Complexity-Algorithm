#include <iostream>
using namespace std;

// Fungsi untuk menghitung lembar dolar secara iteratif
void tukarIteratif(int rupiah, int kurs, int dollarDenom[], int size) {
    int dolar = rupiah / kurs;
    cout << "Total dolar: " << dolar << endl;
    cout << "Lembaran yang didapat:" << endl;

    for (int i = 0; i < size; i++) {
        int jumlahLembar = dolar / dollarDenom[i];
        if (jumlahLembar > 0) {
            cout << jumlahLembar << " lembar $" << dollarDenom[i] << endl;
        }
        dolar %= dollarDenom[i];
    }
}

int main() {
    int dolar;
    int kembalian;
    int rupiah; // Misal 100 ribu rupiah
    int kurs = 15413;    // 1 USD = 15413 IDR

    cin >> rupiah;
    int dollarDenom[] = {100, 50, 20, 10, 5, 1};
    int size = sizeof(dollarDenom) / sizeof(dollarDenom[0]);

    dolar = rupiah / kurs;
    tukarIteratif(rupiah, kurs, dollarDenom, size);
    kembalian = rupiah - (dolar * kurs);
    cout << "Kembalian rupiah : IDR" << kembalian << endl;

    return 0;
}
