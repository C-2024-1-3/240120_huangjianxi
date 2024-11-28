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
    cout<<"������һ��ʮ�������ַ���: ";
    cin >> hexString;

    int decimal = parseHex(hexString);
    if (decimal != -1) {
        printf("ʮ�������ַ��� %s ת�����ʮ������Ϊ: %d\n", hexString, decimal);
    }
    else {
        printf("�����ʮ�������ַ������Ϸ�������������\n");
    }

    return 0;
}