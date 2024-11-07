#include<iostream>
using namespace std;
int main() {
	float x;
	cout << "ÇëÊäÈëxµÄÖµ";
	cin >> x;
	float e;
	if (0 < x && x < 1) {
		e = 3 - 2 * x;
		cout << e << endl;
	}
	else if (1 <= x && x < 5) {
		e = (2.0 / (4 * x)) + 1.0;
		cout << e << endl;
	}
	else if (5 <= x && x < 10) {
		e = x * x;
		cout << e << endl;
	}
	return 0;
}