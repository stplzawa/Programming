#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	int a, i;
	bool prostoe = true;
	cout << "Введите число: ";
	cin >> a;
	if (a > 1)
	{
		for (i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				prostoe = false;
				break;
			}
		}
	}
	if (prostoe == true)
		cout << "Простое";
	else
		cout << "Cоставное " << endl;
}