#include <iostream>
void bubbleSort(double arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    double arr[10];
    std::cout << "������ 10 ��˫�������֣�" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }
    bubbleSort(arr, 10);
    std::cout << "����������Ϊ��";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}