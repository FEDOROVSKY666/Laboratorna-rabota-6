#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char k;
	cout << "Введіть пунктуаційний знак\n";
	cin >> k;

	switch (k)
	{
	case ',': cout << "Кома"; break;
	case ':': cout << "Двокрапка"; break;
	case '.': cout << "Крапка"; break;
	case '-': cout << "Дефіс"; break;
	case '?': cout << "Знак питання"; break;
	case '!': cout << "Знак оклику"; break;
	case ';': cout << "Крапка з комою"; break;

	default: cout << "Не існує"; break;
	}

}
