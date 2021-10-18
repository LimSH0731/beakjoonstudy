#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(void)
{
	string s;
	int cnt = 0;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=')
			{
				i += 1;
				cnt += 1;
			}
			else if (s[i + 1] == '-')
			{
				i += 1;
				cnt += 1;
			}
			else
				cnt += 1;
		}

		else if (s[i] == 'd')
		{
			if (s[i + 1] == 'z')
			{
				if (s[i + 2] == '=')
				{
					i += 2;
					cnt += 1;
				}
				else
					cnt += 1;
			}
			else if (s[i + 1] == '-')
			{
				i += 1;
				cnt += 1;
			}
			else
				cnt += 1;
		}

		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
			{
				i += 1;
				cnt += 1;
			}
			else
				cnt += 1;
		}

		else if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				i += 1;
				cnt += 1;
			}
			else
				cnt += 1;
		}

		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
			{
				i += 1;
				cnt += 1;
			}
			else
				cnt += 1;
		}


		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				i += 1;
				cnt += 1;
			}
			else
				cnt += 1;
		}

		else
			cnt += 1;
	}

	cout << cnt;

	return 0;
}