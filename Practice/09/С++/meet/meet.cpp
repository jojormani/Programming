#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double h1, h2, m1, m2, minutes1, minutes2, difference;
	char col;
	cout << "Введите время прихода первого пешехода, пример: '6 : 30'\n";
	cin >> h1 >> col >> m1;
	cout << "Введите время прихода второго пешехода, пример: '6 : 30'\n";
	cin >> h2 >> col >> m2;
	minutes1 = h1 * 60 + m1;
	minutes2 = h2 * 60 + m2;
	difference = abs(minutes1 - minutes2);
	if (difference <= 15) {
		cout << "Встреча состоиться\n";
	}
	else {
		cout << "Встреча не состоится\n";
	}
}