#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;

    std::cout << "请输入两个正整数：";
    std::cin >> a >> b;

    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);

    std::cout << "最大公约数为：" << greatestCommonDivisor << std::endl;
    std::cout << "最小公倍数为：" << leastCommonMultiple << std::endl;

    return 0;
}
