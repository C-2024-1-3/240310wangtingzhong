#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    std::cout << "������������Ȼ�� m �� n��";
    std::cin >> m >> n;

    int gcdValue = gcd(m, n);

    std::cout << "m �� n �����Լ��Ϊ��" << gcdValue << std::endl;

    return 0;
}