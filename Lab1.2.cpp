#include"stdio.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, m, a, b, c;
	cout << "������� �������� ���������� n:\n";
	cin >> n;
	cout << "������� �������� ���������� m:\n";
	cin >> m;
	a = n-- - m;
	cout << "�����:\n";
	cout << a;
	cout << "\n������� �������� ���������� n:\n";
	cin >> n;
	cout << "������� �������� ���������� m:\n";
	cin >> m;
	b = m-- < n;
	cout << "�����:\n";
	cout << b;
	cout << "\n������� �������� ���������� n:\n";
	cin >> n;
	cout << "������� �������� ���������� m:\n";
	cin >> m;
	c = n++ > m;
	cout << "�����:\n";
	cout << c;
	return 0;
}