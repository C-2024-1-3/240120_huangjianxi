#include <iostream>
using namespace std;
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;

   
    int* arr = new int[size];
    cout << "请依次输入数组的元素: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, size);
     cout << "排序后的数组元素为: ";
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;


    delete[] arr;

    return 0;
}