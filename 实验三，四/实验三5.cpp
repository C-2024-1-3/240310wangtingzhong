#include <iostream>

int eatPeaches(int day) {
    if (day == 10) {
        return 1;
    }

    return (eatPeaches(day + 1) + 1) * 2;
}

int main() {
    int totalPeaches = eatPeaches(1);
    std::cout << "第一天猴子共摘了 " << totalPeaches << " 个桃子" << std::endl;

    return 0;
}