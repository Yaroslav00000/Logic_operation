#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double  dov;
    double  shur;
    double  vusota;
    cout << "Обчислення об'єму пралелепіпеда" << endl;
    cout << "Довжина (см) -> ";
    cin >> dov;
    cout << "Ширина (см) -> ";
    cin >> shur;
    cout << "Висота (см) -> ";
    cin >> vusota;
    double  plocha = dov * shur;
    double  obyem = plocha * vusota;
    cout << "Об'єм: " << obyem << "куб.см" << endl; 
    system("pause");
    return 0;
}
