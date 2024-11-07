#include <iostream> 
using namespace std;
int main()
{
	double a, b;
	cout << "输入两个数a,b" << endl;
	cin >> a >> b;
	char ch;
	cout << "输入运算符" << endl;
	cin >> ch;
	switch (ch)
	{
	case'+':cout << a + b << endl; break;
	case'-':cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'/':


	{
		if (b == 0)cout << "对不起，除数不能为零" << endl;
		else cout << a / b << endl;
	}break;
	case'%':cout << a % b << endl; break;
	
	default:cout << "抱歉，运算符输入错误" << endl; break;
	}
	return 0;

}
