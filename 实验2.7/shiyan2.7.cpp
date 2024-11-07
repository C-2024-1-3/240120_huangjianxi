#include<iostream>
using namespace std;
const int a = 5;
int main() {
	for (int i = 1; i <=a; i++) {
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}