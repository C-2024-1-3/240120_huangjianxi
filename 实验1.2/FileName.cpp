#include<iostream>
const float pi = 3.14;
using namespace std;
int main() {
	int r;
	cout << "请输入圆锥底半径" << endl;
	cin >> r;
	int h;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	float v;
	v = ((pi * r * r) * h) / 3.00;
	printf("%.2f", v);//保留两位小数
	return 0;
}