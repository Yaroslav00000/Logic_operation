#include<iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int year;
    cout << "Ââåä³òü ð³ê: ";
    cin >> year;
    int days = 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    cout << "Ó öüîìó ðîö³ " << days << " äí³â.\n";
    return 0;
}
