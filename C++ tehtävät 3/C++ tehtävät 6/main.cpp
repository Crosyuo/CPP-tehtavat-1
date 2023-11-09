#include <iostream>

int koko = 5;
int* taulukko;

void varaa_taulukko() {
	taulukko = new int[koko];
}

void lue_arvot() {
	for (int i = 0; i < koko; i++) {
		std::cout << "Syota kokonaisluku taulukkoon: ";
		std::cin >> taulukko[i];
	}
}

void kaanna() {
	int temp;
	int lenght = koko;

	for (int i = 0, j = lenght - 1; i < lenght / 2; i++, j--) {
		temp = taulukko[i];
		taulukko[i] = taulukko[j];
		taulukko[j] = temp;
	}
}

void tulosta_arvot() {
	for (int i = 0; i < koko; i++) {
		std::cout << taulukko[i] << std::endl;
	}
}

void vapauta_taulukko() {
	delete[] taulukko;
	taulukko = nullptr;

	std::cout << taulukko;
}

int main() {

	varaa_taulukko();

	lue_arvot();

	kaanna();

	tulosta_arvot();

	vapauta_taulukko();

	return 0;
}
