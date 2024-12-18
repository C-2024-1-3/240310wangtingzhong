#include <iostream>
#include <cstring>

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[80], s2[80];
    std::cout << "输入第一个字符串：";
    std::cin >> s1;
    std::cout << "输入第二个字符串：";
    std::cin >> s2;
    int index = indexOf(s1, s2);
    if (index != -1) {
        std::cout << s1 << " 是 " << s2 << " 的子串，下标为 " << index << std::endl;
    }
    else {
        std::cout << s1 << " 不是 " << s2 << " 的子串" << std::endl;
    }
    return 0;