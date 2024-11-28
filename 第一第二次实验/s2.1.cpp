#include <iostream>

void calculate(double num1, double num2, char op) {
    switch (op) {
    case '+':
        std::cout << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << num1 / num2 << std::endl;
        }
        else {
            std::cout << "除数不能为 0！" << std::endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            std::cout << static_cast<int>(num1) % static_cast<int>(num2) << std::endl;
        }
        else {
            std::cout << "除数不能为 0！" << std::endl;
        }
        break;
    default:
        std::cout << "运算符非法！" << std::endl;
    }
}

int main() {
    double num1, num2;
    char op;

    std::cout << "请输入第一个数：";
    std::cin >> num1;

    std::cout << "请输入第二个数：";
    std::cin >> num2;

    std::cout << "请输入运算符（+ - * / %）：";
    std::cin >> op;

    calculate(num1, num2, op);

    return 0;
}