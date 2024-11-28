#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void lcm(int a, int b, int& result) {
	int zuixiao = gcd(a, b);
	result = (a * b) / zuixiao;
}

int main() {
	int m;
	int n;
	cout << "请输入两个自然数:" << endl;
	cin >> m >> n;
	int jieguo1=gcd(m, n);
	int jieguo2;
	 lcm(m, n,jieguo2);
	cout << m << "和" << n << "的最大公因数是" << jieguo1;
	cout << m << "和" << n << "的最小公倍数是" << jieguo2;
	return 0;
}
