#include<iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int year;
    cout << "������ ��: ";
    cin >> year;
    int days = 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    cout << "� ����� ���� " << days << " ���.\n";
    return 0;
}
