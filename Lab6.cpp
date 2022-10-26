#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "RUS");
    char line[255];
    printf("\n Введите строку слов: ");
    fgets(line, 255, stdin);
    char str[] = "УуЕеАаЫыОоЭэЯяИиЮю";
    int m = 0, n = 0;
    for (n; line[n]; n++)
        if (!strchr(str, line[n])) line[m++] = line[n];
    line[m] = 0;

    printf("\n%s\n", line);
    return 0;
}