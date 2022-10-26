#include <iostream> //подключение библиотек 
#include <stdlib.h>
using namespace std; //пространства имён std
int main()
{
    setlocale(LC_ALL, "ru"); //запись на русском языке
    int i, n; //объявление переменных
    cout << "Введите чисто элементов массива: ";
    cin >> n;
    int* a = new int[n]; // динамический массив new выдляет память неоходимую для хранения объекта
    cout << "Массив А: ";
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
        if (a[i] % 2 == 0) // присваиваем первому четному числу значение m
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
    cout << "Массив без элементов равных нулю и следущий элемент после первого четного равен M: \n ";
    for (i = 0; i < n; i++)
        cout << a[i] << " "; // выводим элементы массива на экран
    return(0);
}