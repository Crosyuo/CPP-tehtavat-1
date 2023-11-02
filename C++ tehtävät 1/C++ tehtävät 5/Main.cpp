#include <iostream>
#include <random>

int main()
{
	int minRange;
	int maxRange;

	std::cout << "Syota pienin luku: ";
	std::cin >> minRange;
	std::cout << "Syota suurin luku: ";
	std::cin >> maxRange;

	std::random_device rd;
	std::uniform_int_distribution<int> dist(minRange, maxRange);
	int x = dist(rd);;
	int y = 0;
	int z = 0;

	while (y != x) {
		std::cout << "Arvaa luku (" << minRange << "-" << maxRange << "): ";
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