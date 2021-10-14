//น้มุ 1152น๘
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(void) {

	string s;

	getline(cin, s);
	int num = 0;


	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] != ' '))
		{
			num += 1;
			while ((s[i] != ' ')&&(i < s.size()))
				i++;
		}
	}

	printf("%d", num);

	return 0;
}