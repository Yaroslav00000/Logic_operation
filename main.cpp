#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double  dov;
    double  shur;
    double  vusota;
    cout << "���������� ��'��� ������������" << endl;
    cout << "������� (��) -> ";
    cin >> dov;
    cout << "������ (��) -> ";
    cin >> shur;
    cout << "������ (��) -> ";
    cin >> vusota;
    double  plocha = dov * shur;
    double  obyem = plocha * vusota;
    cout << "��'��: " << obyem << "���.��" << endl; 
    system("pause");
    return 0;
}
