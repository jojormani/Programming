﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int j, n, f;
	f = 0;
	cout << "Введите количество билетов и нажмите ENTER\n";
	cin >> n;
	cout << "Введите билеты через пробел(SPACE)\n";
	string a{};
	for (j = 1; j <= n; j++)
	{
		cin >> a;
		if (a[0] == 'a' && a[4] == '5' && a[5] == '5' && a[6] == '6' && a[7] == '6' && a[8] == '1')
		{
			cout << a << ' ';
		}
		else
		{
			f = f + 1;
		}
	}
	if (f == n)
	{
		cout << "-1";
	}
	return 0;
}