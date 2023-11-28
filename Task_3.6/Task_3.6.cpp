#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;

    cout << "Виберіть номер завдання (1, 2 або 3): ";
    cin >> choice;

    switch (choice)
    {
    case 1: {
        double n;
        int day;

        cout << "Введіть довжину макаронів (в кілометрах): ";
        cin >> n;
        cout << "Введіть номер дня: ";
        cin >> day;

        double pasta_left = n;

        for (int i = 1; i <= n; ++i) {
            pasta_left -= pasta_left / (i + 1);
        }

        cout << "Петрику залишилось " << pasta_left << " км макаронів.";
        break;
    }

    case 2: {
        int term;
        cout << "Введіть кількість доданків для обчислення числа π: ";
        cin >> term;

        double pi_simple = 0.0;
        double pi_double = 0.0;

        for (int i = 0; i < term; ++i) {
            pi_simple += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
            pi_double += (i % 2 == 0 ? 1.0 : -1.0) / (2.0 * i + 1);
        }

        cout << "Проста точність: " << 4 * pi_simple << endl;
        cout << "Подвійна точність: " << 4 * pi_double << endl;
        break;
    }

    case 3: {
        int g;
        cout << "Введіть натуральне число для розкладу: ";
        cin >> g;

        cout << "Розклад числа " << g << " на прості множники: ";

        for (int i = 2; i <= g; ++i) {
            while (g % i == 0) {
                cout << i << " ";
                g /= i;
            }
        }

        cout << endl;
        break;
    }

    default:
        cout << "Немає такого номеру завдання";
        break;
    }

    return 0;
}