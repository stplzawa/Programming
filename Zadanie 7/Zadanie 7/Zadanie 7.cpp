#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int vvod; 
		cout << "Выберите способ нахождения площади: " << "\n" << "[1] - через стороны" << "\n" << "[2] - через вершины" << "\n";
		cin >> vvod;
	switch (vvod) {
		case 1:
			double a, b, c,p, S;
			cout << ("Введите стороны треугольника a,b,c") << "\n";
			cin >> a >> b >> c;
			if (a <= 0 or b <= 0 or c <= 0 or (a + b) <= c or (b + c) <= a or (a + c) <= b) {
				cout << "Данные некорректны." << endl;
			}
			else {
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				cout << ("Площадь равна = ") << S << "\n";
			}
			break;
		case 2:
			double x1, x2, x3, y1, y2, y3;
			cout << "Введите координаты вершины треугольника" << "\n";
			cout << "A=";
			cin >> x1 >> y1;
			cout << "B=";
			cin >> x2 >> y2;
			cout << "C=";
			cin >> x3 >> y3;
			if ((x1 == x2 && x1 == x3) or (y1 == y2 && y2 == y3) or (x1 == x2 && y1 == y2) or (x2 == x3 && y1 == y3)) {
				cout << "Введенные данные некорректны. Попробуйте снова" << endl;
			}
			else {
				S = abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2;
				cout << "S = " << S << endl;
			}
			break;
		default:
			cout << "Выберите только один из предложенных способов!" << endl;
		}
	return(0);
}