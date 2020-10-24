#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c, discriminant, x;
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
			x = -c / a;
			cout << x;
		}
	}
	if (a != 0 && b == 0) {
		if (c == 0) {
			x = 0;
			cout << x;
		}
		else {
			if (a > 0) {
				if (c > 0) {
					cout << "Корней нет";
				}
				else {
					x = -c / a;
					cout << x;
				}
			}
			if (a < 0) {
				if (c > 0) {
					x = -c / a;
					cout << x;
				}
				else {
					cout << "Корней нет";
				}
			}
		}
	}
	if (a != 0 & b!= 0) {
		if (c == 0) {
			x = -b / a;
			cout << "x = 0" << endl <<  x;
		}
		else {
			discriminant = b * b - 4 * a * c;
			if (discriminant < 0) {
				cout << "Корней нет";
			}
			if (discriminant == 0) {
				x = -b / 2 * a;
				cout << x;
			}
			if (discriminant > 0) {
				x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
				cout << x << endl;
				x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
				cout << x << endl;
			}
		}
	}
	return 0;
}