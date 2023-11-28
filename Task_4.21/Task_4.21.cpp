#include <iostream>
#include <cmath>
using namespace std;

double function1(double x)
{
	double f1 = 2 * pow(sin(x / 3.2), 2) * log(abs(x + 9));
	return f1;
}

double function2(double x)
{
	double f2 = 2 * pow(sin(x / 3.2), 2) * log(abs(x + 9));
	return f2;
}

int main()
{
	double a, b, x, z, f, i;
	a = 0;
	b = 0;
	i = 21;

	for (int k = 21; k <= 26; k++)
		a = a + function1(k);
	for (int k = 21; k <= 29; k++)
		b = b + function2(k);
	z = tan(a + b);

	cout << "Значення і: " << i << endl;
	cout << "Значення а: " << a << endl;
	cout << "Значення b: " << b << endl;
	cout << "Значення z: " << z << endl;

}