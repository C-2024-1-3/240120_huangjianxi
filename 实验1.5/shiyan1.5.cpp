#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double hsd;
	cout << " 请输入华氏度温度"<<endl;
	cin >> hsd;
	double ssd = (hsd - 32) * 5 / 9;
	cout << fixed << setprecision(2) << hsd << "华氏度对应的摄氏度是" << ssd << endl;
	return 0;
}