﻿#include <iostream>
using namespace std;

int main()
{
	long long s, l1, l2, r1, r2, i, j, x1, x2;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	x1 = 0;
	x2 = s + 20;
	for (i = l1; i <= r1; i++)
	{
		for (j = l2; j <= r2; j++)
		{
			if (i + j == s)
			{
				x1 = i;
				x2 = j;

			}
			if (x1 + x2 == s)
			{
				cout << x1 << "\t" << x2 << "\n";
				return 0;
			}
		}
	}
	cout << -1;
}