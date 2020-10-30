

#include <iostream>
#include <cmath>
using namespace std;
int main() {
setlocale(LC_ALL, "Russian");
int  number, amount;
double power, index;
cout << "Введите число" << endl;
cin >> number;
index = 0;
power = 0;
amount = 0;
for (int i = 1; i <= number; i++) {
	power = pow(2, index);
	if (power <= number) {
			amount++;
		}
	else {
		break;

	}
	index++;
	}
	cout << amount;
}