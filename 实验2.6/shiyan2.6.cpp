#include<iostream>
using namespace std;
int gys(int a, int b) {
	int minval = (a < b) ? a : b;
	for (int i = minval; i > 0; i--) {
		if (a % i == 0 && b % i == 0)
			return i;
	}
	return 1;
}
int gbs(int a, int b) {
	int maxnum = max(a, b);
	for (int i = maxnum;; i++) {
		if (i % a == 0 && i % b == 0) {
			return i;
			break;
		}
	}
}
int main() {
	int a, b;
	cout << "请输入两个整数：" << endl;
	cin >> a >> b;
	cout << "他们的最大公约数是" << gys(a, b)<<endl;
	cout << "他们的最大公倍数是" << gbs(a, b);
	return 0;
}