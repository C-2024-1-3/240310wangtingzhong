#include <iostream>

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
    int size1, size2;
    std::cout << "输入第一个数组的元素个数：";
    std::cin >> size1;
    int list1[80];
    std::cout << "输入第一个排列好的数组：";
    for (int i = 0; i < size1; i++) {
        std::cin >> list1[i];
    }
    std::cout << "输入第二个数组的元素个数：";
    std::cin >> size2;
    int list2[80];
    std::cout << "输入第二个排列好的数组：";
    for (int i = 0; i < size2; i++) {
        std::cin >> list2[i];
    }
    int list3[80];
    merge(list1, size1, list2, size2, list3);
    std::cout << "合并后的数组为：";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << list3[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}