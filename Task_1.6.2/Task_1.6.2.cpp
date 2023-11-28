#include <iostream>
#include <string>

using namespace std;

void PrintInfo(char city)
{
    string fullname;
    int population;
    double area;

    if (city == 'K') {
        fullname = "Kiyv";
        population = 2952301;
        area = 839;
    }
    else if (city == 'Ch') {
        fullname = "Chernihiv";
        population = 282747;
        area = 79;
    }
    else if (city == 'O') {
        fullname = "Odesa";
        population = 1010537;
        area = 162;
    }
    else if (city == 'D') {
        fullname = "Dnipro";
        population = 968502;
        area = 409;
    }
    else if (city == 'L') {
        fullname = "Lviv";
        population = 717273;
        area = 149;
    }
    else if (city == 'Kh') {
        fullname = "Kharkiv";
        population = 1421125;
        area = 350;
    }
    else if (city == 'P') {
        fullname = "Poltava";
        population = 279593;
        area = 112;
    }
    else {
        cout << "Такого міста не знайдено в базі даних" << endl;
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