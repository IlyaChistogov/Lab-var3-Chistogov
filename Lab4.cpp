#include <iostream> //����������� ��������� 
#include <stdlib.h>
using namespace std; //������������ ��� std
int main()
{
    setlocale(LC_ALL, "ru"); //������ �� ������� �����
    int i, n; //���������� ����������
    cout << "������� ����� ��������� �������: ";
    cin >> n;
    int* a = new int[n]; // ������������ ������ new ������� ������ ���������� ��� �������� �������
    cout << "������ �: ";
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    int m = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != 0) a[m++] = a[i];
    n = m;
    cout << "\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    int g, b;
    i = 0;
    while (i < n)
    {
        g = a[i - 1] + 2;
        if (a[i] % 2 == 0) // ����������� ������� ������� ����� �������� m
        {
            for (b = n; b > i; b--)
            {
                a[b] = a[b - 1];
            }
            n = n + 1;
            a[i + 1] = g;
            i++;
        }
        else i++;
    }
    cout << "������ ��� ��������� ������ ���� � �������� ������� ����� ������� ������� ����� M: \n ";
    for (i = 0; i < n; i++)
        cout << a[i] << " "; // ������� �������� ������� �� �����
    return(0);
}