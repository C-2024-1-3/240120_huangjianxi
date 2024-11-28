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
    cout << "����������Ԫ�ظ���: ";
    cin >> size;

   
    int* arr = new int[size];
    cout << "���������������Ԫ��: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, size);
     cout << "����������Ԫ��Ϊ: ";
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;


    delete[] arr;

    return 0;
}