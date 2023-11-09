#include <iostream>

int* varaa_taulukko(int n) {
	int* location = new int[n];
	return location;
}

int main(){
	 int* taulukko = varaa_taulukko(5);
	 std::cout << taulukko;
}