#include <iostream> 
using namespace std;
int main()
{
	double a, b;
	cout << "����������a,b" << endl;
	cin >> a >> b;
	char ch;
	cout << "���������" << endl;
	cin >> ch;
	switch (ch)
	{
	case'+':cout << a + b << endl; break;
	case'-':cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'/':


	{
		if (b == 0)cout << "�Բ��𣬳�������Ϊ��" << endl;
		else cout << a / b << endl;
	}break;
	case'%':cout << a % b << endl; break;
	
	default:cout << "��Ǹ��������������" << endl; break;
	}
	return 0;

}
