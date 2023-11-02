#include <iostream>

int x = 1;

int main()
{
	std::cout << "Pelataan Kiinalaista Numeropelia!\n";

	while (x != 0) {
		std::cout << "Anna luku: ";
		std::cin >> x;
		if (x != 0) {
			std::cout << "Voitin, minun on " << x + 1 << "\n";
		}
	}

	return 0;
}