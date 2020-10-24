#include <iostream>
using namespace std; 
int main() {
	setlocale(LC_ALL, "Russian");
	char operation;
	double a, b, result;
	while (true) {
		cout << "Введите запись вычислительного процесса" << endl;
		cin >> a >> operation >> b;
		if (operation == '+') {
			result = a + b;
			cout << result << endl;
		}
		if (operation == '-') {
			result = a - b;
			cout << result << endl;
		}
		if (operation == '/') {
			if (b == 0) {
				cout << "Деление на ноль запрещено" << endl;
			}
			else {
				result = a / b;
				cout << result << endl;
			}
		}
		if (operation == '*') {
			result = a * b;
			cout << result << endl;
		}
		int answer;
		cout << "Вычислить снова: 1 - да, 0 - нет" << endl;
		cin >> answer;
		if (answer == 0) break;
	}
}