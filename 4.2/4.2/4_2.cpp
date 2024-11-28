#include <iostream>
const int maxn = 15;
int a[maxn];
using namespace std;

int main() {
	cout << "pls enter 10 numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i=0;i<10;i++)
		for (int j = 0; j < 9 - i; j++) {
			if (a[j] > a[j + 1]) {
				int p = a[j];
				a[j] = a[j + 1];
				a[j + 1] = p;
			}
		}
	cout << endl;
	cout << "ÅÅÐòºó£º";
	for (int i = 0; i < 10; i++) {
		cout << a[i]<<" ";
	}
}