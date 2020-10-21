#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double x, e;
    double log = 0;
    double a = 1;
    double r = 1;
    int i = 1;
    cout << "Введите х: ";
    cin >> x;
    cout << "Ввеите снование логарифма: ";
    cin >> e;
    while (a > e)
    {
        r *= x * x;
        a = r / i;
        log -= a;
        i++;
    }
    cout << log;
    return 0;
}