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

class Lehti : public Julkaisu
{
private:
	std::string _paatoimittaja;

public:
	Lehti(const std::string& nimi, const std::string& paatoimittaja) :
		Julkaisu(nimi), _paatoimittaja(paatoimittaja)
	{}

	virtual void tulosta_tiedot() const
	{
		Julkaisu::tulosta_tiedot();
		std::cout << "Paatoimittaja: " << _paatoimittaja << std::endl;
	}
};

int main() {
	Julkaisu* kirja = new Kirja("Hytti n:o 6", "Rosa Liksom", 200);
	Julkaisu* lehti = new Lehti("Aku Ankka", "Aki Hyppä");

	kirja->tulosta_tiedot();
	lehti->tulosta_tiedot();
}