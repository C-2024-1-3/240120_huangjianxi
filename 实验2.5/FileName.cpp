#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e;
	char ch;

	while (e = 1)
	{
		cin.get(ch);
		if (ch == '\n')
			break;
		else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			a++;
		else if (ch >= '0' && ch <= '9')
			b++;
		else if (ch == ' ')
			c++;
		else
			d++;
	}
	cout << "Ӣ����ĸ��" << a << "�ո���" << c << "�����ַ���" << b << "�����ַ���" << d << endl;
	return 0;

}
