#include <iostream>
#include <windows.h>
#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, a, c, b;
    cout << "Введіть a:";
    cin >> a;
    cout << "Введіть b:";
    cin >> b;
    cout << "Введіть c:";
    cin >> c;
    cout << "Введіть x:";
    cin >> x;

    double f;
    if ((x + 5 < 0) && (c == 0)) {
        f = (1 / (a * x)) - b;
        cout << f;
    }
    else if ((x + 5 > 0) && (c != 0||x != 0)) {
        f = (x - a) / x;
        cout << f;
    }
    else if (c - 4 != 0) {
        f = (10 * x) / (c - a);
        cout << f;
    }
    else
        cout << "Error";
}