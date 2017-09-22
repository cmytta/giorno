// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

long double x, y, resultat;


int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "enter x: ";
	cin >> x;
	cout << "" << endl;
	cout << "enter y: ";
	cin >> y;
	cout << "" << endl;
	resultat = cos(y)*sqrt(abs(sin(x)))/log10(pow(x,3));
	cout << resultat << endl;
	system("pause");
	return 0;
}
