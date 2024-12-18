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
    std::cout << "请输入两个自然数 m 和 n：";
    std::cin >> m >> n;

    int gcdValue = gcd(m, n);

    std::cout << "m 和 n 的最大公约数为：" << gcdValue << std::endl;

    return 0;
}