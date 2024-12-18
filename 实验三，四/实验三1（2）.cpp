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
    std::cout << "请输入两个数：";
    std::cin >> m >> n;

    findGcdAndLcm(m, n, gcd, lcm);

    std::cout << "最大公约数：" << gcd << std::endl;
    std::cout << "最小公倍数：" << lcm << std::endl;

    return 0;
}