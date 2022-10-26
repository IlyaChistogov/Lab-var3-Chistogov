#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    float a1, b1, c1, d1, f1, res1(0);

    a1 = 1000;
    b1 = 0.0001;

    c1 = (pow(a1 + b1, 3)); d1 = (pow(a1, 3) + 3 * pow(a1, 2) * b1); f1 = (3 * a1 * pow(b1, 2) + pow(b1, 3));

    res1 = ((c1 - d1) / f1);

    cout << "Резельтат для данных типа float равен " << res1 << "\n\n";

    double a2, b2, c2, d2, f2, res2(0);

    a2 = 1000;
    b2 = 0.0001;

    c2 = (pow(a2 + b2, 3)); d2 = (pow(a2, 3) + 3 * pow(a2, 2) * b2); f2 = (3 * a2 * pow(b2, 2) + pow(b2, 3));

    res2 = ((c2 - d2) / f2);

    cout << "Резельтат для данных типа double равен " << res2 << "\n\n";

    return 0;
}