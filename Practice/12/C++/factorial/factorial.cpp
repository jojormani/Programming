#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Russian");
int n, result;
cout << "Введите значение n " << endl;
cin >> n;
result = n;
while (n > 1) {
	result = result * (n - 1);
	n = n - 1;
}
cout << result << endl;
}