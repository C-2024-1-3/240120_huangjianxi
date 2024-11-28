#include <iostream>
#include <iomanip>
using namespace std;


bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return true;
        }
    }
    return true;
}

int main() {
    int cnt = 0;
    int num = 2;  
    while (cnt < 200) {
        if (is_prime(num)) {
            cout << setw(6) << num;  
            cnt++;
            if (cnt % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }
    return 0;
}