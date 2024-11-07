#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	double a, x, y, z;
	z = 1;
	cout << "输入一个数a" << endl;
	cin >> a;
	if (a >= 0)
	{
		for (x = 1; z >= pow(10, -5);)
		{
			y = (1.0 / 2) * (x + a / x);
			z = abs(y - x);
			x = y;
		}

		cout << "a的平方根为" << x << endl;
	}
	else cout << "a的平方根不存在" << endl;


	return 0;
}
