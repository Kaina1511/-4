#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int b;
	double x;
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	x = b / a;
	cout << a<< "x"<<" = "<<b<<endl;
	cout <<"x" << " = " << x;
	return 0;
}

