#include <iostream>
#include <limits>

int x = 1;

int main()
{
	std::cout << "Pelataan Kiinalaista Numeropelia!\n";

	while (x != 0) {
		std::cout << "Anna luku: ";
		std::cin >> x;
		if (x != 0 && x!= std::numeric_limits<int>::max()) {
			std::cout << "Voitin, minun on " << x + 1 << "\n";
		}
		else if (x==std::numeric_limits<int>::max()) {
			std::cout << "Tasapeli!\n";
		}
	}

	return 0;
}