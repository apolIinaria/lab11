#include <iostream>
#include <string>
using namespace std;

void PrintInfo(char city)
{
    string fullname;
    int population, area;

    switch (city)
    {
    case 'K':
        fullname = "Kiyv";
        population = 2952301;
        area = 839;
        break;
    case 'Ch':
        fullname = "Chernihiv";
        population = 282747;
        area = 79;
        break;
    case 'O':
        fullname = "Odesa";
        population = 1010537;
        area = 162;
        break;
    case 'D':
        fullname = "Dnipro";
        population = 968502;
        area = 409;
        break;
    case 'L':
        fullname = "Lviv";
        population = 717273;
        area = 149;
        break;
    case 'Kh':
        fullname = "Kharkiv";
        population = 1421125;
        area = 350;
        break;
    case 'P':
        fullname = "Poltava";
        population = 279593;
        area = 112;
        break;
    default:
        cout << "Такого міста не знайдено в базі даних";
        return;
    }
    cout << "Повна назва міста: " << fullname << endl;
    cout << "Населення: " << population << " людей" << endl;
    cout << "Площа: " << area << " км^2" << endl;
}

int main()
{
    char city;
    cout << "Введіть першу літеру українського міста англійською: ";
    cin >> city;
    PrintInfo(city);
    return 0;
}