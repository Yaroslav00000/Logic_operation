#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double radius;
    cout << "¬вед≥ть рад≥ус кул≥: ";
    cin >> radius;
    double volume = (4.0 / 3.0) * 3.14 * (radius * radius * radius);
    cout << "ќб'Їм кул≥: " << volume << " куб≥чних одиниць.\n"; 
    system("pause");
    return 0;
}
