#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите число:" << endl;
    cin >> n;
    for (int i = 1; i <= n >> 1; ++i)
        if (n % i == 0)
        {
            cout << " " << i;
        }
    return 0;
}