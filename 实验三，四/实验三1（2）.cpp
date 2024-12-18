#include <iostream>

void findGcdAndLcm(int& a, int& b, int& gcd, int& lcm) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (a * b) / gcd;
}

int main() {
    int m, n, gcd, lcm;
    std::cout << "��������������";
    std::cin >> m >> n;

    findGcdAndLcm(m, n, gcd, lcm);

    std::cout << "���Լ����" << gcd << std::endl;
    std::cout << "��С��������" << lcm << std::endl;

    return 0;
}