#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int second, hours, min, seconds;

    cout << "������ ������� ������: ";
    cin >> second;

    hours = second / 3600;
    second %= 3600;
    min = second / 60;
    seconds = second % 60;

    cout << hours << " ��� " << min << " �� " << seconds << " ��� " <<  endl;

    return 0;
    system("pause");
    return 0;
}
