#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c, d, x, x1, x2;
	setlocale(LC_ALL, "RUS");
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;

	if ((a == 0) && (b == 0))
	{
		if (c == 0)
			cout << "Ур-ие верно при/n";
		else
			cout << "Решений нет";
		return 1;
	}

	if (a == 0)
	{
		cout << "x=" << -c / b;
	}
	else if (b == 0)
	{
		if ((-c / a) < 0)
			cout << "Нет корней";
		else
			cout << "x= " << sqrt(-c / a);
	}
	else
	{
		d = b * b - 4 * a * c;

		if (d < 0)
		{
			cout << "Нет корней";
		}
		if (d > 0)
		{
			x1 = ((-b + sqrt(d)) / (2 * a));
			x2 = ((-b - sqrt(d)) / (2 * a));

			cout << "x1=" << x1 << "\n";
			cout << "x2=" << x2 << "\n";
		}
		if (d == 0)
		{
			x = (-b) / (2 * a);
			cout << "x=" << x << "\n";
		}
	}
}