#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Выберите способ нахождения площади: " << "\n" << "[1] - через стороны" << "\n" << "[2] - через вершины" << "\n";
	int vvod;
	cin >> vvod;
	if (vvod == 1) {
		double a, b, c, p, S;
			cout << ("Введите стороны треугольника") << "\n";
			cin >> a >> b >> c;
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << ("Площадь равна = ") << S << "\n";
	}
	else if (vvod == 2) {
		int x1, x2, x3, y1, y2, y3;
		double S;
		cout << ("Введите вершины треугольника") << "\n";
		cout <<"A(x1,y1)= " << "\n"; 
		cin >> x1 >> y1;
		cout << "B(x2,y2)= " << "\n";
		cin >> x2 >> y2;
		cout <<"C(x3,y3)= " << "\n";
		cin >> x3 >> y3;
		S = ((x1-x3) * (y2 - y3) - (x2 - x3) * (y1 - y3))/ 2;
		cout << "S=" << -S;
		}
	return 0;
}

