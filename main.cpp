#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int hryvna, kop;

    cout << "������ ���� � �������: ";
    cin >> hryvna;

    cout << "������ ���� � �������: ";
    cin >> kop;

    if (kop >= 100) {
        hryvna += kop / 100;
        kop %= 100;
    }

    cout << "����������� ����: " << hryvna << " ���. " << kop << " ���." << endl;
    system("pause");
    return 0;
}
