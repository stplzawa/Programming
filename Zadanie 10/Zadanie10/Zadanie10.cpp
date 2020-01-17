
#include <iostream>
#include <cmath>
using namespace std;
double a, res;
int n;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите число" << "\n" << "a= ";
	cin >> a;
	cout << "Введите степень" << "\n" << "n= ";
	cin	>> n;
	res = a;
	for (int i = 1; i < abs(n); i++) {
		res = res * a;
	}
	    
		if (n < 0) 
			cout << "Результат= " << 1.0 / res;
		else cout << "Результат= " << res;
	
	return 0;
}

