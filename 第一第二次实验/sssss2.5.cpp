#include <iostream>

int main() {
    int letters = 0, spaces = 0, digits = 0, others = 0;
    char c;

    std::cout << "请输入一行字符：";

    while ((c = std::cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else {
            others++;
        }
    }

    std::cout << "字母个数：" << letters << std::endl;
    std::cout << "空格个数：" << spaces << std::endl;
    std::cout << "数字个数：" << digits << std::endl;
    std::cout << "其他字符个数：" << others << std::endl;

    return 0;
}
