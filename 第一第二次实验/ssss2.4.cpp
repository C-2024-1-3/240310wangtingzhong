
#include <iostream>

bool isTriangle(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return false;
    }
    return true;
}

bool isIsosceles(double a, double b, double c) {
    if (a == b || a == c || b == c) {
        return true;
    }
    return false;
}

int main() {
    double a, b, c, perimeter;

    std::cout << "请输入三角形的三条边：";
    std::cin >> a >> b >> c;

    if (isTriangle(a, b, c)) {
        perimeter = a + b + c;
        std::cout << "三角形的周长为：" << perimeter << std::endl;

        if (isIsosceles(a, b, c)) {
            std::cout << "该三角形是等腰三角形" << std::endl;
        }
        else {
            std::cout << "该三角形不是等腰三角形" << std::endl;
        }
    }
    else {
        std::cout << "输入的三条边不能构成三角形" << std::endl;
    }

    return 0;
}