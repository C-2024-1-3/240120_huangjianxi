#include <iostream>
using namespace std;
int peach_count(int n) {
    if (n == 10) {
        return 1;
    }
    return (peach_count(n + 1) + 1) * 2;
}

int main() {
    int result = peach_count(1);
    cout << "第一天猴子共摘了" << result << "个桃子" << endl;
    return 0;
}