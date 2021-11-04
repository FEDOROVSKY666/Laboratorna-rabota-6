#include<iostream>
#include <iomanip> 
#include "windows.h"
using namespace std;
int main()
{
	float Z, y;
	cout << "input y:";
	cin >> y;
	Z = 1;
	for (int n = 1; n <= 10; n++) {
		Z = Z / n;
		//comment 
	}
	Z = (y + Z + 2) / (y + 2);
	cout << "Z=" << setprecision(3) << Z << endl;
}