//
// Created by LeSun on 24-12-16.
//
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    // 构造函数，初始化坐标值为(60, 80)
    Point() {
        x = 60;
        y = 80;
    }
    // 成员函数，用于修改坐标值
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    // 成员函数，用于显示坐标值
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p;  // 创建Point类的对象p
    p.display();  // 输出初始坐标值

    p.setPoint(10, 20);  // 修改坐标值
    p.display();  // 输出修改后的坐标值

    return 0;
}