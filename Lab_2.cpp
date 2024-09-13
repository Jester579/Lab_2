/* 
Lab_02.cpp
Демчука Максима
Лабораторна робота № 2
Лінійні програми.
Варіант 5
*/

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a;
	double z1;
	double z2;

	cout<< "Введіть a: "<< endl;
	cin>>a;

	//z1 = 1 - 1/4.0 * (sin(2*a) * sin(2*a)) + cos(2*a);
    z2 = (cos(a) * cos(a)) + (cos(a) * cos(a) * cos(a) * cos(a));

	//cout <<"Перша формула: " << z1 << endl;
	cout << "Друга формула: " << z2 << endl;
   
	return 0;
}

