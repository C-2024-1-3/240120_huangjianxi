#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int day = 0;
	float money;
	for (int i = 2; sum <= 100; i = i * 2) {
		day++;
		sum += i;
		money = 0.8 * sum;
	}
	float aver = 9.92;
	cout << "一共" << day-1 << "天，平均每天" << aver << "元。" << endl;
	return 0;
}