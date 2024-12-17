#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string id;  // 学号
    int score;  // 成绩
    Student(string s, int sc) : id(s), score(sc) {}
};

// max函数，使用指向对象的指针作参数来找出最高成绩者的学号
void max(Student* students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (students[i]->score > students[maxIndex]->score) {
            maxIndex = i;
        }
    }
    cout << "the highest scores student is " << students[maxIndex]->id << endl;
}

int main() {
    Student* students[5];
    students[0] = new Student("001", 85);
    students[1] = new Student("002", 90);
    students[2] = new Student("003", 88);
    students[3] = new Student("004", 92);
    students[4] = new Student("005", 80);

    max(students, 5);

    // 释放动态分配的内存
    for (int i = 0; i < 5; ++i) {
        delete students[i];
    }

    return 0;
}