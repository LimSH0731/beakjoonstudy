#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int main(void) {

	string s;
	int sec = 0;

	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] >= 65) && (s[i] < 68))
			sec += 3;
		else if ((s[i] >= 68) && (s[i] < 71))
			sec += 4;
		else if ((s[i] >= 71) && (s[i] < 74))
			sec += 5;
		else if ((s[i] >= 74) && (s[i] < 77))
			sec += 6;
		else if ((s[i] >= 77) && (s[i] < 80))
			sec += 7;
		else if ((s[i] >= 80) && (s[i] < 84))
			sec += 8;
		else if ((s[i] >= 84) && (s[i] < 87))
			sec += 9;
		else if ((s[i] >= 87) && (s[i] < 91))
			sec += 10;
	}

	cout << sec;

	return 0;
}