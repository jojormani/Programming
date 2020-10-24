#include <iostream> 
using namespace std; 
int main() {

	setlocale(LC_ALL, "Russian");


	int first, second;
	cout << "Введите первое число" << endl;
	cin >> first;
	cout << "Введите второе число" << endl;
	cin >> second;

	cout << "Результат сложения " << first + second << endl;
	cout << "Результат вычитания " << first - second << endl;
	cout << "Результат произведения " << first * second << endl;
	cout << "Результат деления " << first / second << endl;


	double thirt, four;
	cout << "Введите третье число " << endl;
	cin >> thirt;
	cout << "Введите четвертое число" << endl;
	cin >> four;

	cout << "Результат сложения " << thirt + four << endl;
	cout << "Результат вычитания " << thirt - four << endl;
	cout << "Результат умножения " << thirt * four << endl;
	cout << "Результат деления " << thirt / four << endl; 

	
	int fifth;
	double sixth;
	cout << "Введите пятое число " << endl;
	cin >> fifth;
	cout << "Введите шестое число" << endl;
	cin >> sixth;

	cout << "Результат сложения " << fifth + sixth << endl;
	cout << "Результат вычитания " << fifth - sixth << endl;
	cout << "Результат умножения " << fifth * sixth << endl;
	cout << "Результат деления " << fifth / sixth << endl;


	double seventh;
	int eight; 
	cout << "Введите седьмое число " << endl;
	cin >> seventh;
	cout << "Введите восьмое число" << endl;
	cin >> eight;

	cout << "Результат сложения " << seventh + eight << endl;
	cout << "Результат вычитания " << seventh - eight << endl;
	cout << "Результат умножения " << seventh * eight << endl;
	cout << "Результат деления " << seventh / eight << endl;
}