#include<iostream>
using namespace std;
const int maxn = 1000000;
int a[maxn];
int b[maxn];
int main() {
	cout << "Enter the numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		b[a[i]]++;
	}
	cout << endl;
	cout << "The distinct numbers are:";
	for (int i = 0; i < maxn; i++) {
		if (b[i] != 0) {
			cout << i<<" ";
		}
	}
	return 0;
}