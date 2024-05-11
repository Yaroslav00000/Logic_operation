#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    double mashtab, dis_cm;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Обчислення відстані між населеними пунктами.\n";
    cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    cin >> mashtab;
    cout << "Відстань між точками, що зображують населені пункти (см) -> ";
    cin >> dis_cm;
    double dis_km = mashtab * dis_cm;
    cout << "Відстань між населеними пунктами " << dis_km << " км.\n";
    system("pause");
    return 0;
}
