#include <iostream>

void funcA() {
	int c;
	std::cout << "input(number): ";
	std::cin >> c;
	if (c < 10)
		throw std::out_of_range("Invalid Input!!");
}
int main() {
	try {
		funcA();
	}
	catch (std::out_of_range e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}
	return 0;
}