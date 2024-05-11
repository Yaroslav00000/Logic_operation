#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double distancemeters, distancekilometers,timeseconds, finaltimeseconds, speedkm_Hour;
    int timeminutes;

    cout << "Обчислення швидкості бігу.\n";
    cout << "Введіть довжину дистанції (метрів) = ";
    cin >> distancemeters;

    cout << "Введіть час (хв) = ";
    cin >> timeminutes;
    cout << "І час (сек) = ";
    cin >> timeseconds;

    finaltimeseconds = (timeminutes * 60) + timeseconds;
    distancekilometers = distancemeters / 1000;
    speedkm_Hour = distancekilometers / (finaltimeseconds / 3600);

    cout << "Дистанція: " << distancemeters << " м." << endl;
    cout << "Час: " << timeminutes << " мин " << timeseconds << " сек = " << finaltimeseconds << " сек." << endl;
    cout << "Ви бігли зі швидкістю " << speedkm_Hour << " км/год." << endl;
    system("pause");
    return 0;
}
