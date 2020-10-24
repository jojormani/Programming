#include <iostream>
using namespace std; 
int main() {
	setlocale(LC_ALL, "Russian");
	double formula, x, v, t, a, rezult;
	a = 9.8;
	cout << "Введите значение х " << endl;
	cin >> x;
	cout << "Введите значение v " << endl;
	cin >> v;
	cout << "Введите значение t " << endl;
	cin >> t;

	formula = x + v * t - (a * t * t) / 2;
	rezult = abs(formula - x);

	cout << "Результат: " << rezult << endl;
}