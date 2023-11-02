#include <iostream>
#include <random>

int main()
{
	std::random_device rd;
	std::uniform_int_distribution<int> dist(1, 100);
	int x = dist(rd);;
	int y = 0;
	int z = 0;

	while (y != x) {
		std::cout << "Arvaa luku (1-100): ";
		std::cin >> y;

		z++;

		if (y < x) {
			std::cout << "Liian pieni!\n";
		}
		else if (y > x) {
			std::cout << "Liian suuri!\n";
		}
		else if (y == x) {
			std::cout << "Oikein! Teit " << z << " arvausta.";
		}
	}

	return 0;
}