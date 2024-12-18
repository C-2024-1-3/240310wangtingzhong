#include <iostream>
using namespace std;

// 排序函数
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
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
    cout << "输入数组元素个数：";
    cin >> size;

    // 使用 new 动态分配数组
    int* arr = new int[size];

    cout << "输入数组元素：";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // 排序
    sortArray(arr, size);

    // 输出数组元素
    cout << "排序后的数组：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 释放内存
    delete[] arr;

    return 0;
}