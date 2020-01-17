#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double xt, x0, v0, t, g;
	cout << "Введите x0: , v0: , t0: " << "\n";
	cin >> x0;
	cin >> v0;
	cin >> t;
	g = -9.8;
	xt = (x0 + v0 * t + g * t * t / 2);
	cout << "x(t)=";
	cout << xt << endl;
	xt = (x0 + v0 * t + 1.0/2 * g * t * t);
	cout << "x(t)=";
	cout << xt << endl;
	return 0;
}