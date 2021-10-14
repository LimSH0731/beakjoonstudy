#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int main(void) {

	int a = 0, b = 0;

	string n1, n2, n3;

	getline(cin, n1);

	reverse(n1.begin(), n1.end());

	int num = n1.find(' ');

	n2 = n1.substr(0, num);
	n3 = n1.substr(num + 1);

	a = stoi(n2);
	b = stoi(n3);

	cout << (a > b ? a : b);

	return 0;
}