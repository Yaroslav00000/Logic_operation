#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int hryvna, kop;

    cout << "¬вед≥ть суму в гривн€х: ";
    cin >> hryvna;

    cout << "¬вед≥ть суму в коп≥йках: ";
    cin >> kop;

    if (kop >= 100) {
        hryvna += kop / 100;
        kop %= 100;
    }

    cout << "—коригована сума: " << hryvna << " грн. " << kop << " коп." << endl;
    system("pause");
    return 0;
}
