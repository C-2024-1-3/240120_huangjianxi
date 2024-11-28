#include <iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int L1 = strlen(s1);
	int L2 = strlen(s2);
	for (int i = 0; i < abs(L2 - L1); i++) {
		int j;
		for (j = 0; j < L1; j++) {
			if (s2[i + j] != s1[j]) {
				break;
			}
		}
		if (j == L1) {
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[100], s2[100];
	cout << "Enter the first string£º";
	cin.getline(s1,100);
	cout << endl;
	cout << "Enter the second string£º ";
	cin.get(s2,100);

	int result = indexOf(s1, s2);
	if (result != -1)
		cout << "indexOf \"" << s1 << "\",\"" << s2 << "\"is" << result;
	else cout << "indexOf \"" << s1 << "\",\"" << s2 << "\"is" << result;
}