#include <iostream>
#include <vector>

class Hissi {
private:
    int _alin;
    int _ylin;
    int _kerros;

public:
    Hissi(int alin, int ylin) : _alin(alin), _ylin(ylin), _kerros(alin) {}

    void kerros_alas() {
        if (_kerros > _alin) {
            _kerros -= 1;
            std::cout << _kerros << std::endl;
        }
    }

    void kerros_ylos() {
        if (_kerros < _ylin) {
            _kerros += 1;
            std::cout << _kerros << std::endl;
        }
    }

    void siirry_kerrokseen(int kerros) {
        if (_alin <= kerros && _ylin >= kerros)
            if (kerros > _kerros) {
                while (_kerros != kerros) {
                    kerros_ylos();
                }
            }
            else if (kerros < _kerros) {
                while (_kerros != kerros) {
                    kerros_alas();
                }
            }
            else {
                std::cout << "\nOlet jo talla kerroksella.\n";
            }
        else {
            std::cout << "\nKerrosta ei ole.\n";
        }

    }
};

class Talo {
private:
    int _alin;
    int _ylin;
    int _lkm;
    std::vector<Hissi> _hissit;

public:
    Talo(int alin, int ylin, int lkm) : _alin(alin), _ylin(ylin), _lkm(lkm) {
        for (int i = 0; i < lkm; ++i) {
            _hissit.emplace_back(alin, ylin);
        }
    }

    void aja_hissiä(int hissiNumero, int kerros) {
        if (hissiNumero >= 1 && hissiNumero <= _lkm) {
            _hissit[hissiNumero - 1].siirry_kerrokseen(kerros);
            std::cout << std::endl;
        }
        else {
            std::cout << "Virhe: Hissiä ei ole olemassa!" << std::endl << std::endl;
        }
    }
};

int main() {
    Talo t1(1, 5, 4);
    Talo t2(0, 20, 10);

    t1.aja_hissiä(2, 4);
    t1.aja_hissiä(4, 4);

    t2.aja_hissiä(4, 20);

    t1.aja_hissiä(4, 1);

    return 0;
}