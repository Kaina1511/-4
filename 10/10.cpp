#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите число от 1 до 9: ";
    cin >> n;

    if (n > 0 && n < 10) {
        for (int i = 0; i < 10; i++)
            cout << n << " x " << i << " = " << n * i << endl;
    }
    else
        cout << "Вы вели число  не от 1 до 9";

    return 0;
}