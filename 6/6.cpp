#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double a;
	double b;
	double c;
	double d;
	double x1;
	double x2;
	double x3;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;

	d = b * b - 4 * a * c;
	if (d < 0)
	{
		cout << " Нет корней ";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		cout << " x= " << x1 << endl;
	}
	else if (d > 0)
	{
		x2 = (-b + sqrt(d)) / (2 * a);
		x3 = (-b - sqrt(d)) / (2 * a);
		cout << "x1=" << x2 << endl << "x2=" << x3 << endl;
	}
	system("pause");
}