#include"stdio.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, m, a, b, c;
	cout << "Введите значение переменной n:\n";
	cin >> n;
	cout << "Введите значение переменной m:\n";
	cin >> m;
	a = n-- - m;
	cout << "Ответ:\n";
	cout << a;
	cout << "\nВведите значение переменной n:\n";
	cin >> n;
	cout << "Введите значение переменной m:\n";
	cin >> m;
	b = m-- < n;
	cout << "Ответ:\n";
	cout << b;
	cout << "\nВведите значение переменной n:\n";
	cin >> n;
	cout << "Введите значение переменной m:\n";
	cin >> m;
	c = n++ > m;
	cout << "Ответ:\n";
	cout << c;
	return 0;
}