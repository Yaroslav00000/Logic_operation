#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double radius;
    cout << "������ ����� ���: ";
    cin >> radius;
    double volume = (4.0 / 3.0) * 3.14 * (radius * radius * radius);
    cout << "��'�� ���: " << volume << " ������� �������.\n"; 
    system("pause");
    return 0;
}
