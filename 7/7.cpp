#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	unsigned int n;
	unsigned long f = 1;
	int o;
	setlocale(0, "");
	do
	{
		f = 1;
		cout << "Введите число: ";
		cin >> n;
		for (n; n > 0; n--)
			f *= n;
		cout << "Факториал числа = " << f << endl;
		cout << "Введите 1, если хотите повторить операцию, иначе введите 0, чтобы завершить" << endl;
		cin >> o;
	} while (o != 0);
	return 0;
}