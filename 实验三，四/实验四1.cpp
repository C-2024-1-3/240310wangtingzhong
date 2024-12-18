#include <iostream>

int main() {
    int arr[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        int num;
        std::cin >> num;

        bool isNew = true;
        for (int j = 0; j < count; j++) {
            if (arr[j] == num) {
                isNew = false;
                break;
            }
        }

        if (isNew) {
            arr[count++] = num;
        }
    }

    std::cout << "不同的数为: ";
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}