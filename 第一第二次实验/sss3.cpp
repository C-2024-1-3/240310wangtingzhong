#include<iostream>
int main() {
	double fahrenheit;
	std::cout << "华氏温度";
	std::cin >> fahrenheit;
	double celsius = (fahrenheit - 32) * 5.0 / 9.0;
	std::cout << fahrenheit << "华氏度等于" << "摄氏度" << std::endl;
	return 0;

}
