//实验1.1修改后如下
#include <iostream>
using namespace std;
int main() {
	int k;
	cin >> k;//未定义k
	int i = k + 1;
	cout << i++ << endl;
	int j = 1;//i重复定义，将其改为j
	cout << j++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}