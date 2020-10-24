#include <iostream>
using namespace std; 
int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Первый способ" << endl;

	int first, second, substitution;
	substitution = 0;
	cout << "Введите значение первой переменной first " << endl;
	cin >> first;
	cout << "Введите значение второй переменной second " << endl;
	cin >> second;

	substitution = first;
	first = second;
	second = substitution;

	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
	

	cout << "Второй способ" << endl;

	int thirt, four;
	cout << "Введите значение третьей переменной thirt " << endl;
	cin >> thirt;
	cout << "Введите значение четвертой переменной four " << endl;
	cin >> four;

	thirt = thirt + four;
	four = thirt - four; 
	thirt = thirt - four;
	 
	cout << "thirt = " << thirt << endl;
	cout << "four = " << four << endl;
}