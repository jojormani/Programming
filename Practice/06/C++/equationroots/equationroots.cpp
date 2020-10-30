#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c, discriminant, x1, x2, x;
	cout << "Введите значение перменной а: ";
	cin >> a;
	cout << "Введите значение переменной b: ";
	cin >> b;
	cout << "Введите значение переменной с ";
	cin >> c;
	if (a == 0 && b == 0)
	{
		if (c == 0)
		{
			cout << "Все корни являются верными";
		}
		else
		{
			cout << "Корней не существует";
		}
	}
	if (a == 0 and b != 0) {
		if (c == 0) {
			cout << "х = 0";
		}
		else {
			x = -c / b;
			cout << x;
		}
	}
	if (a != 0 && b == 0) {
		if (c == 0) {
			cout << "x = 0";
		}
		else {
			if (a > 0) {
				if (c > 0) {
					cout << "Корней нет";
				}
				else {
					x1 = sqrt(-c / a);
					x2 = -sqrt(-c / a);
					cout << x1 << endl << x2;
				}
			}
			if (a < 0) {
				if (c > 0) {
					x1 = sqrt(-c / a);
					x2 = -sqrt(-c / a);
					cout << x1 << endl << x2;
				}
				else {
					cout << "Корней нет";
				}
			}
		}
	}
	if (a != 0 && b!= 0) {
		if (c == 0) {
			x = -b / a;
			cout << "x1 = 0" << endl << "x2 = " << x;
		}
		else {
			discriminant = b * b - 4 * a * c;
			if (discriminant < 0) {
				cout << "Корней нет";
			}
			if (discriminant == 0) {
				x = -b / (2 * a);
				cout << "x = " << x;
			}
			if (discriminant > 0) {
				x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
				cout << x1 << endl;
				x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
				cout << x2 << endl;
			}
		}
	}
	return 0;
}