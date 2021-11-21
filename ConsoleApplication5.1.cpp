
#include <windows.h>
#define _USE_MATH_DEFINES   
#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()

{
	double x, y, a;
	//Ввод исходных данных
	printf("Input x: ");
	scanf_s("%lf", &x);
	printf("Input y:");
	scanf_s("%lf", &y);
	//Вычисление выражения
	// - непосредственно по формуле
	a = x - (pow(pow(x, 2) / (1 * 2 * 3), 1 / 5) + pow(x, pow(y, 2)) / (1 * 2 * 3 * 4 * 5) + exp(3) + 2 / abs(x - y * 8));
	//Вывод вычисленных значений с надписями
	cout << "a=" << a << endl;
}