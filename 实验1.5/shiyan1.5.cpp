#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double hsd;
	cout << " �����뻪�϶��¶�"<<endl;
	cin >> hsd;
	double ssd = (hsd - 32) * 5 / 9;
	cout << fixed << setprecision(2) << hsd << "���϶ȶ�Ӧ�����϶���" << ssd << endl;
	return 0;
}