#include <iostream>
#include <cstdlib>
#include <ctime>
	
using namespace std;

const int N = 20 ;

int main()
{
	srand(time(nullptr));
	int mass[N], max, min;
	setlocale(LC_ALL, "RUS");
	for (int r = 0; r < N; r++)
	{
		mass[r] = rand() % 202 - 101;
		cout << mass[r]<< " ";
	}
	cout << endl;

	max = mass[0];
	min = mass[0];
	for (int r = 1; r < N; r++)
	{
		if (max < mass[r]) max = mass[r];
		if (min > mass[r]) min = mass[r];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
}