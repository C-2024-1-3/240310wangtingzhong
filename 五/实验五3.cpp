#include <iostream>
using namespace std;

// 定义长方柱类
class Cuboid {
private:
    double length;
    double width;
    double height;
public:
    // 成员函数用于从键盘输入长、宽、高
    void input() {
        cout << "请输入长方柱的长：";
        cin >> length;
        cout << "请输入长方柱的宽：";
        cin >> width;
        cout << "请输入长方柱的高：";
        cin >> height;
    }

    // 成员函数用于计算长方柱的体积
    double calculateVolume() {
        return length * width * height;
    }

    // 成员函数用于输出长方柱的体积
    void output() {
        cout << "该长方柱的体积为：" << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboids[3];  // 创建3个长方柱对象的数组

    // 循环输入3个长方柱的长、宽、高
    for (int i = 0; i < 3; ++i) {
        cout << "请输入第" << (i + 1) << "个长方柱的信息：" << endl;
        cuboids[i].input();
    }

    // 循环输出3个长方柱的体积
    for (int i = 0; i < 3; ++i) {
        cout << "第" << (i + 1) << "个长方柱：" << endl;
        cuboids[i].output();
    }

    return 0;
}