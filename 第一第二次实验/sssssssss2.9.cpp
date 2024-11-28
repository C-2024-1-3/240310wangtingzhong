#include <iostream>

int main() {
    double price = 0.8;  // 每个苹果的价格
    int totalApples = 0;  // 总苹果数
    double totalCost = 0;  // 总花费
    int day = 1;  // 天数

    while (totalApples <= 100) {
        int apples = 1 << (day - 1);  // 每天购买的苹果数，按 2 的幂增长
        totalApples += apples;
        totalCost += apples * price;
        day++;
    }

    // 计算每天平均花费
    double averageCostPerDay = totalCost / (day - 1);

    std::cout << "每天平均花费：" << averageCostPerDay << std::endl;

    return 0;
}
