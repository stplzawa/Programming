#include <math.h>>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	char x = '@'; 
	cout << "Введите выражение, используя следующие символы-знаки:'*,/,+,-'й" << "\n";
	cin >> a >> x >> b;
	switch (x) {
	case '*': c = a * b;
		cout << "Ответ = " << c << endl;
		break;   
	case '/': c = a / b;
		if (b == 0) {
			cout << "Ошибка. На 0 делить нельзя" << "\n";
		}
		cout << "Ответ = " << c << endl;
		break;
	case '+': c = a + b;
		cout << "Ответ = " << c << endl;
		break;
	case '-': c = a - b;
		cout << "Ответ = " << c << endl;
		break;
	default:  
		cout << "Ошибка. Введите заданное действие: *, /, + , -.";
}
	return 0;
}


