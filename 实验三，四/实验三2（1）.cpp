#include<iostream>
bool isPrime(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int num;
	std::cout << "������һ����";
	std::cin >> num;
	if (isPrime(num)) {
		std::cout << num << "������" << std::endl;
	}
	else {
		std::cout << num << "��������" << std::endl;
	}
	return 0;
}