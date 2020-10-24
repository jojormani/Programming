#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	char colon, colon2;
	cout << "Введите время прихода первого человека " << endl; 
	cin >> a >> colon >> b;
	cout << "Введите время прихода второго человека" << endl;
	cin >> c >> colon2 >> d;
	if ((c - a) > 0) {
		cout << "Встреча не состоится" << endl;
	}
	else {
		if ((d - b) > 15) {
			cout << "Встреча не состоится" << endl;
		}
		else {
			cout << "Встреча состоится" << endl;
		}
	}
}