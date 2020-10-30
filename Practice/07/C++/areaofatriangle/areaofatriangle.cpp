#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int determinant;
	double a, b, c, x1, x2, x3, y1, y2, y3, p, S;
	cout << "Выберите метод вычисления S:" << endl;
	cout << "введите 1, если хотите вычислить площадь треугольника координатным способом;" << endl;
	cout << "введите 2, если хотите вычислить площадь треугольника с помощью длин его сторон" << endl;
	cin >> determinant; 
	if (determinant == 1) {
		cout << "Введите координаты первой вершины" << endl;
		cin >> x1 >> y1;
		cout << "Введите координаты второй вершины" << endl;
		cin >> x2 >> y2;
		cout << "Введите координаты третьей вершины" << endl;
		cin >> x3 >> y3;
		if (((x1 == x2) && (x1 == x3) && (x2 == x3)) || ((y1 == y2) && (y1 == y3) && (y2 == y3)) || ((y1 == y2) && (x1 == x2)) || ((y1 == y3) && (x1 == x3)) || ((y2 == y3) && (x2 == x3)))  {
			cout << "Такого треугольника не существует";
			
		}
		else {
			a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
			b = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
			c = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
			if ((a < b + c) && (b < a + c) && (c < a + b)) {
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				cout << "S = " << S;
			}
			else {
				cout << "Такого треугольника не существует";
			}
		}
	}
	else if (determinant == 2) {
		cout << "Введите длину стороны а треугольника" << endl;
		cin >> a;
		cout << "Введите длину стороны b треугольника" << endl;
		cin >> b;
		cout << "Введите длину стороны c треугольника" << endl;
		cin >> c;
		if ((a < b + c) && (b < a + c) && (c < a + b)) {
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S;
		}
		else {
			cout << "Такого треугольника не существует";
		}
	}
	else {
		cout << "Ошибка ввода";
	}
}