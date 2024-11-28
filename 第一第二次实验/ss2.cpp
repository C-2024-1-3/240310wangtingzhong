#include <iostream>
const double PI = 3.14159;
int main() {
	double radius, height;
	std::cout << "圆锥底的半径：";
	std::cin >> radius;
	std::cout << "锥高：";
	std::cin >> height;
	double volume = (1.0 / 3) * PI * radius * radius * height;
	std::cout << "圆锥体积为：" << volume << std::endl;
	return 0;

}