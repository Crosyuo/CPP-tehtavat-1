#include <iostream>

int main()
{
	int x;
	int *y;
	y = &x;

	std::cout << &x << std::endl;
	std::cout << &y << std::endl;

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}