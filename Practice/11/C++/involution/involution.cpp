#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double number, degree, result;
	cout << "Введите число" << endl;
	cin >> number;
	cout << "Введите степень" << endl;
	cin >> degree; 
	result = number;
	if (degree == 1) {
		cout << result;
	}
	else if (degree > 1) {
		while (degree > 1) {
			result = result * number;
			degree = degree - 1;
		}
		cout << result << endl;
	}
	if (degree == 0) {
		cout << "1" << endl;
	}
	else if (degree < 0) {
		while (degree < -1) {
			result = result * number;
			degree = degree + 1;
		}
		cout << 1 / result;
	}
}