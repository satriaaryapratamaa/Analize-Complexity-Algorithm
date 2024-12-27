#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung lembar dolar
void tukarRekursif(int dolar, int dollarDenom[], int size, int index) {
    if (dolar == 0 || index >= size) {
        return;
    }

    int jumlahLembar = dolar / dollarDenom[index];
    if (jumlahLembar > 0) {
        cout << jumlahLembar << " lembar $" << dollarDenom[index] << endl;
    }

    tukarRekursif(dolar % dollarDenom[index], dollarDenom, size, index + 1);
}

int main() {
    double rupiah; // Misal 100 ribu rupiah
    double kurs = 15413;
    int kembalian;
    cin >> rupiah;// 1 USD = 15000 IDR
    int dollarDenom[] = {100, 50, 20, 10, 5, 1};
    int size = sizeof(dollarDenom) / sizeof(dollarDenom[0]);

    int dolar = rupiah / kurs;
    cout << "Total dolar: " << dolar << endl;
    cout << "Lembaran yang didapat:" << endl;

    tukarRekursif(dolar, dollarDenom, size, 0);
    kembalian = rupiah - (dolar * kurs);
    cout << "Kembalian rupiah : IDR" << kembalian << endl;

    return 0;
}
