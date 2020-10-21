#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    int b;
    double v;
    double x;
    cout << "Введите значение а: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    x = pow(a,2) + pow(b,2);
    v = sqrt(x);
    cout <<a<<"^2" <<" + " <<b<<"^2" << " = "<< v<<"^2";
    return 0;
}