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
	cout << "������������Ȼ��:" << endl;
	cin >> m >> n;
	int jieguo1=gcd(m, n);
	int jieguo2;
	 lcm(m, n,jieguo2);
	cout << m << "��" << n << "�����������" << jieguo1;
	cout << m << "��" << n << "����С��������" << jieguo2;
	return 0;
}
