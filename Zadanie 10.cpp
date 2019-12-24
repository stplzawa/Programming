
#include <iostream>
#include <cmath>
using namespace std;
int a, n, res;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите число" << "\n" << "a= ";
	cin >> a;
	cout << "Введите степень" << "\n" << "n= ";
	cin	>> n;
	res = a;
	for (int i = 1; i < n; i++) {
		res = res * a;
	}
	cout <<"Результат= " << res;
	return 0;
}

