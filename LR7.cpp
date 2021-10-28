

#include <iostream>
#include <iomanip> 
#include "windows.h"
using namespace std;
int main()
{
	float y, x;
    cout << "input x:";
	cin >> x;
	y = 0;
	for (int i = 1; i < 4; i++) {
		y += i * x;
}
	y = pow(x, 3) + sin(y);
	cout << "Y=" << setprecision(3) << y << endl;
}

