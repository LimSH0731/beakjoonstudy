#include <iostream>
#include <limits.h>

using namespace std;

int main(void)
{
	long long a = 0, b = 0, c = 0, d = 0, e = 0;

	cin >> a >> b >> c;

	long long cost = 0, income = 0;
	int i = 0;

	d = c - b;

	if (d < 1)
	{
		i = -1;
		cout << i;

		return 0;
	}

	e = a / d;
	e++;

	cout << e;

	return 0;
}