#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(void)
{

	int num = 0;
	int cnt = 0;
	cin >> num;
	cin.ignore();

	for (int i = 0; i < num; i++)
	{
		string s;
		getline(cin, s);

		while (s.size() > 1)
		{
			string t = s.substr(1);
			int idx = t.find(s[0]);
			if (idx > 0)
			{
				cnt += 1;
				break;
			}
			s = t;
		}
	}

	cout << num-cnt;

	return 0;
}