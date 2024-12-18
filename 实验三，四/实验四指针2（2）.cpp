#include <iostream>
#include <cmath>
#include <cstring>

int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    for (int i = 0; i < len; i++) {
        int value;
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            value = hexString[i] - '0';
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            value = hexString[i] - 'A' + 10;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            value = hexString[i] - 'a' + 10;
        }
        result += value * std::pow(16, len - i - 1);
    }
    return result;
}

int main() {
    char hexString[20];
    std::cout << "输入一个十六进制数的字符串：";
    std::cin >> hexString;
    int decimal = parseHex(hexString);
    std::cout << "对应的十进制数为：" << decimal << std::endl;
    return 0;
}