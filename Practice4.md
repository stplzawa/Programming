# Programming
Practice
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	cout << "1" << "\n";
	cout << "Введите значение a=";
	cin >> a;
	cout << "Введите значение b=";
	cin >> b;
	c = a; a = b; b = c;
	cout << "Измененные значения а=" << a << " b=" << b << "\n";
	cout << "------------------------" << "\n";
	cout << "2" << "\n";
	cout << "Введите значение а=";
	cin >> a;
	cout << "Введите значение b=";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Измененные значения а=" << a << " b=" << b << "\n";
	return 0;
}
