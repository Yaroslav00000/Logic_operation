#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double distancemeters, distancekilometers,timeseconds, finaltimeseconds, speedkm_Hour;
    int timeminutes;

    cout << "���������� �������� ���.\n";
    cout << "������ ������� ��������� (�����) = ";
    cin >> distancemeters;

    cout << "������ ��� (��) = ";
    cin >> timeminutes;
    cout << "� ��� (���) = ";
    cin >> timeseconds;

    finaltimeseconds = (timeminutes * 60) + timeseconds;
    distancekilometers = distancemeters / 1000;
    speedkm_Hour = distancekilometers / (finaltimeseconds / 3600);

    cout << "���������: " << distancemeters << " �." << endl;
    cout << "���: " << timeminutes << " ��� " << timeseconds << " ��� = " << finaltimeseconds << " ���." << endl;
    cout << "�� ���� � �������� " << speedkm_Hour << " ��/���." << endl;
    system("pause");
    return 0;
}
