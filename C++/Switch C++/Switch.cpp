#include <iostream>
using namespace std;

int main () {
    int kode_hari;
    cout << "Menetukan nama hari : " << endl;
    cout << "1 = Senin, 2 = Selasa, 3 = Rabu, 4 = Kamis"
         << "\n5 = Jumat, 6 = Sabtu, 7 = Minggu" << endl;
    cout << "Masukkan kode hari ="; cin >> kode_hari;

    switch (kode_hari) {
        case 1:
            cout << "Hari Senin" << endl;
            break;
        case 2:
            cout << "Hari Selasa" << endl;
            break;
        case 3:
            cout << "Hari Rabu" << endl;
            break;
        case 4:
            cout << "Hari Kamis" << endl;
            break;
        case 5:
            cout << "Hari Jumat" << endl;
            break;
        case 6:
            cout << "Hari Sabtu" << endl;
            break;
        case 7:
            cout << "Hari Minggu" << endl;
            break;
        default:
            cout << "Kode hari salah";


    }
    return 0;
}
