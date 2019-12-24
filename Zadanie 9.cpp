#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int a, b, c, i;
	b = 1;
	
		while (b = 1) {
			i = 0;
			c = rand() % 101;
			cout << "Игра - Угадай число""\n";
			while (i < 3) {
				cin >> a;
				if (a > c) {
					cout << "Загаданное число меньше " << a << "\n";
				}
				else if (a < c) {
					cout << "Загаданное число больше " << a << "\n";
				}
				else if (a == c) {
					cout << "Вы угадали! \n";
					break;
				}
				i++;
			}
			if (i == 5) {
				cout << "Вы проиграли. Загаданное число - " << c;
			}
			cout << "Желаете начать сначала? (1-Да)\n";
			cin >> b;
	}
}
