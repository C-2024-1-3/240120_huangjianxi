#include<iostream>
using namespace std;
const int maxn = 5;
int main() {
	char word[maxn];
	cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸£º" << endl;
	cin >> word;
	if ('a' <= 'word' <= 'z') {
		word[0] -= 'a' - 'A';
		cout << word[0];
	}
	else {
		word[0] += 1;
		cout << 'word';
	}
	return 0;
}