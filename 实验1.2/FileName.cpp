#include<iostream>
const float pi = 3.14;
using namespace std;
int main() {
	int r;
	cout << "������Բ׶�װ뾶" << endl;
	cin >> r;
	int h;
	cout << "������Բ׶�ĸ�" << endl;
	cin >> h;
	float v;
	v = ((pi * r * r) * h) / 3.00;
	printf("%.2f", v);//������λС��
	return 0;
}