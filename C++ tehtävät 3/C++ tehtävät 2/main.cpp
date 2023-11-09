#include <iostream>

int* varaa_taulukko(int n) {
	int* location = new int[n];
	return location;
}

void lue_arvot(int* t, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Syota kokonaisluku taulukkoon: ";
		std::cin >> t[i];
	}
}

int main() {
	int koko = 3;
	int* taulukko = varaa_taulukko(koko);
	std::cout << taulukko << std::endl;

	lue_arvot(taulukko, koko);
	//std::cout << taulukko[1] << std::endl;

	for (int i = 0; i < koko; i++) {
		std::cout << taulukko[i] << std::endl;
	}
}
