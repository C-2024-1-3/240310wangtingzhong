#include <iostream>
#include "mytriangle.h"

bool is_valid(double side1, double side2, double side3) {
    if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
        side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        return false;
    }
    return true;
}

double area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    double side1, side2, side3;

    std::cout << "�����������������ߵĳ��ȣ�";
    std::cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double areaValue = area(side1, side2, side3);
        std::cout << "�����ε����Ϊ��" << areaValue << std::endl;
    }
    else {
        std::cout << "����ı߳����Ϸ����޷�����������" << std::endl;
    }

    return 0;
}