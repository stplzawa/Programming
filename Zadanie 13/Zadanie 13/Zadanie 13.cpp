#include <iostream>
using namespace std;
int main()
{
	int c = 0;
	long long a, x = 1;
	cin >> a;
	while (x <= a)
	{
		if (x <= a)
			c++;
		x *= 2;
	}
	cout << c;
}