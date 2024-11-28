#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
   
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
 
    while (i < size1) {
        list3[k++] = list1[i++];
    }

    while (j < size2) {
        list3[k++] = list2[j++];
    }
}


int main() {
    int list1[80], list2[80], list3[160];
    int size1, size2;


    cout << "输入第一个已排序数组的元素个数: ";
    cin >> size1;
    cout << "输入第一个已排序数组的元素: ";
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }


    cout << "输入第二个已排序数组的元素个数: ";
    cin >> size2;
    cout << "输入第二个已排序数组的元素: ";
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }


    merge(list1, size1, list2, size2, list3);


    cout << "合并后的数组为: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}