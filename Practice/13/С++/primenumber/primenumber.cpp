#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int number, condition;
	cout << "Введите число для проверки" << endl;
	cin >> number;
	condition = 0;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			cout << "Составное число" << endl;
			condition = 1;
			break;
		}
	}
	if (condition != 1) {
		cout << "Простое число" << endl;
}
} 
