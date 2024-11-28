#include <iostream>
#include <cstring>
using namespace std;
void count(const char s[], int counts[])
{
	int len = strlen(s);
	for (int b = 0; b < 26; b++)
	{
		counts[b] = 0;
	}
	int a = 0;
	for (; a < len; a++)
	{
		for (int i = 0; i < 26; i++)
		{
			if (s[a] == 'a' + i || s[a] == 'A' + i)
				counts[i]++;
		}
	}

}

void Cout(int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		char d = 'a' + i;
		if (counts[i] != 0)
		{
			cout << "字母" << d << "出现的次数为" << counts[i] << endl;
		}
	}

}

int main()
{
	int counts[26];
	char s[2];
	cin >> s;
	count(s, counts);
	Cout(counts);


}
