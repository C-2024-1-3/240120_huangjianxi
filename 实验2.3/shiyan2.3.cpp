
#include <iostream> 
using namespace std;
int main()
{
	double a, b, c;
	cout << "输入三角形的三边a,b,c " << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "该三角形不存在" << endl;
	else if (a == b || a == c || b == c)

		cout << "此三角形为等腰三角形" << "周长为" << a + b + c << endl;
	else
		cout << "此三角形不是等腰三角形" << "周长为" << a + b + c << endl;
	return 0;


}
