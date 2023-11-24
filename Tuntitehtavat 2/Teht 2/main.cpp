#include <iostream>
#include <vector>

class Hissi {
private:
    int _alin;
    int _ylin;
    int _kerros;

public:
    void luo_hissi(int alin, int ylin) {
        _alin = alin;
        _ylin = ylin;
        _kerros = alin;
    }

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
public:
    std::vector<Hissi> _hissit;
    Talo(int alin, int ylin, int lkm) {
        int _alin = alin;
        int _ylin = ylin;
        int _lkm = lkm;

        for (int i = 0; i < _lkm; i++) {
            Hissi y;
            _hissit.push_back(y);
        }
    }

    //or
    //Hissi* _hissit;
    //Talo(int lkm) {
    //    _hissit = new Hissi[lkm];
    //}
    //~Talo() {
    //    delete[] _hissit;
    //}
};

int main() {
    Hissi h;
    h.luo_hissi(1, 5);

    h.siirry_kerrokseen(4);
    h.siirry_kerrokseen(1);
    h.siirry_kerrokseen(6);
    h.siirry_kerrokseen(5);
    h.siirry_kerrokseen(0);
    h.siirry_kerrokseen(1);
    h.siirry_kerrokseen(1);

    Talo t;

    return 0;
}