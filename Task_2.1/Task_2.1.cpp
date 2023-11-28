#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Введіть координату x: ";
    cin >> x;
    cout << "Введіть координату y: ";
    cin >> y;

    if (x >= -1 && x <= 1 && y >= -1 && y <= 1 && (y >= x || y <= -x))
    {
        cout << "Точка знаходиться в заштрихованій області.";
    }
    else {
        cout << "Точка не знаходиться в заштрихованій області.";
    }

    return 0;
}
