#include <iostream>
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int count = 0;
    int num = 2;
    while (count < 200) {
        if (isPrime(num)) {
            std::cout << num << "\t";
            count++;
            if (count % 10 == 0) {
                std::cout << std::endl;
            }
        }
        num++;
    }
    return 0;
}