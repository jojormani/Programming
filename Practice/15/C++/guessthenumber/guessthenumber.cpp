#include <ctime>
#include <iostream>
using namespace std; 
int main() {
	setlocale(LC_ALL, "rus");
	int number, attempt;
	int identifier;
	identifier = 1;
	while (identifier == 1) {
		srand(time(0));
		number = rand() % 101;
		cout << "Приветсвуем!У вас есть 5 попыток, чтобы отгадать число!" << endl;
		for (int i = 0; i < 5; i++) {
			cin >> attempt;
			if (attempt == number) {
				cout << "Поздравляю! Вы угадали! Хотите начать сначала ? (1 - ДА)" << endl;
				cin >> identifier;
				break;
			}
			else {
				if (i == 4) {
					cout << "Вы проиграли. Было загадано: " <<  number  << " Хотите начать сначала ? (1 - ДА; 2 - НЕТ)" << endl;
					cin >> identifier;
					if (identifier == 2) {
						cout << "Удачного дня!";
					}
				}
				else if (number > attempt) {
					cout << "Загаданное число больше" << endl;
				}
				else if (number < attempt) {
					cout << "Загаданное число меньше" << endl;
				}
			}
		}
	}
}