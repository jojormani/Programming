﻿#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int s, l1, r1, l2, r2, x1, x2, a;
	cout << "Введите число и два диапазона\n";
	cin >> s >> l1 >> r1 >> l2 >> r2;
	a = 0;
	if ((s > (r1 + r2)) || (s < (l1 + l2))) {
		cout << -1;
	}
	else {
		if ((s - l1) >= l2) {
			if (s <= (l1 + r2)) {
				cout << l1 << " " << s - l1;
			}
			else {
				a = abs(s - (l1 + r2));
				if ((l1 + a) < r1 && (r2 - a) > l2) {
					std::cout << l1 + a << " " << s - (l1 + a);
				}
				else {
					cout << -1;
				}
			}
		}
		else {
			cout << -1;
		}
	}
}