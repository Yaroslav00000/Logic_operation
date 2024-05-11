#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double Number;

    cout << "¬вед≥ть дробове число:  ";
    cin >> Number;

    int wholePart = Number;
    double fractionalPart = Number - wholePart;
    int kopecks = fractionalPart * 100;

    if (kopecks == 0) {
        cout << wholePart << " грн." << endl;
    }
    else {
        cout << wholePart << " грн. " << kopecks << " коп." << endl;
    }
    system("pause");
    return 0;
}
