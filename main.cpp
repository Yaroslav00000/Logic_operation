#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    double mashtab, dis_cm;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "���������� ������ �� ���������� ��������.\n";
    cout << "������� ����� (������� �������� � ������ ���������) -> ";
    cin >> mashtab;
    cout << "³������ �� �������, �� ���������� ������� ������ (��) -> ";
    cin >> dis_cm;
    double dis_km = mashtab * dis_cm;
    cout << "³������ �� ���������� �������� " << dis_km << " ��.\n";
    system("pause");
    return 0;
}
