#include<iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    for (int i = 0; i < len; i++) {
        char ch = hexString[i];
        int digit;
        if (isdigit(ch)) {
            digit = ch - '0';
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }
        else {
            return -1;
        }
        result = result * 16 + digit;
    }
    return result;
}

int main() {
    char hexString[100];
    cout<<"请输入一个十六进制字符串: ";
    cin >> hexString;

    int decimal = parseHex(hexString);
    if (decimal != -1) {
        printf("十六进制字符串 %s 转换后的十进制数为: %d\n", hexString, decimal);
    }
    else {
        printf("输入的十六进制字符串不合法，请重新输入\n");
    }

    return 0;
}