#include <iostream>

double calculateSqrt(double a) {
    double x = a;
    double prevX;

    do {
        prevX = x;
        x = 0.5 * (x + a / x);
    } while (x - prevX > 1e-6 || prevX - x > 1e-6);

    return x;
}

int main() {
    double a;

    std::cout << "请输入一个数：";
    std::cin >> a;

    double sqrtValue = calculateSqrt(a);

    std::cout << "a 的平方根为：" << sqrtValue << std::endl;

    return 0;
}