#include <iostream>
#include <string>

class Julkaisu {
private:
	std::string _nimi;

public:
	Julkaisu(const std::string& nimi) : _nimi(nimi)
	{}

	virtual void tulosta_tiedot() const
	{
		std::cout << "Julkaisun nimi: " << _nimi << std::endl;
	}
};

class Kirja : public Julkaisu
{
private:
	std::string _kirjoittaja;
	int _sivut;

public:
	Kirja(const std::string& nimi, const std::string& kirjoittaja, int sivut) : 
		Julkaisu(nimi), _kirjoittaja(kirjoittaja), _sivut(sivut)
	{}

	virtual void tulosta_tiedot() const
	{
		Julkaisu::tulosta_tiedot();
		std::cout << "Kirjoittaja: " << _kirjoittaja << std::endl;
		std::cout << "Sivut: " << _sivut << std::endl;
	}
};

int main() {
	Julkaisu* kirja = new Kirja("C++ perusteet", "Simo Silander", 150);

	kirja->tulosta_tiedot();
}