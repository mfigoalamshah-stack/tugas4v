#include <iostream>
using namespace std;

int main() {
    int nilai;
    char lanjut;

    do {
        cout << "\nMasukkan nilai: ";
        cin >> nilai;

        if (nilai >= 90) {
            cout << "Grade: A\n";
        } else if (nilai >= 80) {
            cout << "Grade: B\n";
        } else if (nilai >= 70) {
            cout << "Grade: C\n";
        } else {
            cout << "Grade: D\n";
        }

        cout << "Cek nilai lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "\nTerima Kasih!\n";
    return 0;
}
