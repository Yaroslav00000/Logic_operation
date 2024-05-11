#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int days,weeks,day;
	cout << "¬вед≥ть к≥льк≥сть дн≥в: ";
	cin >> days;
	weeks = days / 7;
	day = days % 7;

	cout << weeks << " тиждн≥ ≥ " << day << " дн≥." << endl;

	return 0;
}