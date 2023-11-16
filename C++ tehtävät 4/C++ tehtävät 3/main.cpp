#include <iostream>
#include <string>

class Auto {
private:
    std::string _rekisteritunnus;
    int _huippunopeus;
    int _hetkNop = 0;
    int _kuljMatk = 0;

public:
    void set_rekisteritunnus(const std::string& rekisteritunnus) {
        _rekisteritunnus = rekisteritunnus;
    }

    void set_huippunopeus(int huippunopeus) {
        _huippunopeus = huippunopeus;
    }

    std::string getRekisteritunnus() const {
        return _rekisteritunnus;
    }

    int getHuippunopeus() const {
        return _huippunopeus;
    }

    int getHetkNop() const {
        return _hetkNop;
    }

    int getKuljMatk() const {
        return _kuljMatk;
    }

    void kiihdytä(int kiihdytys) {
        if (_hetkNop + kiihdytys >= _huippunopeus) {
            _hetkNop = _huippunopeus;
        }
        else if (_hetkNop + kiihdytys <= 0) {
            _hetkNop = 0;
        }
        else {
            _hetkNop += kiihdytys;
        }
    }

    void kulje(float tunt) {
        if (tunt > 0) {
            _kuljMatk += _hetkNop * tunt;
        }
    }
};

int main() {
    Auto auto1;
    auto1.set_rekisteritunnus("ABC-123");
    auto1.set_huippunopeus(142);

    auto1.kiihdytä(60);
    auto1.kulje(1.5);

    std::cout << "Rekisteritnnus: " << auto1.getRekisteritunnus() << "\n"
        << "Huippunopeus: " << auto1.getHuippunopeus() << " km/h\n"
        << "Tamanhetkinen nopeus: " << auto1.getHetkNop() << " km/h\n"
        << "Kuljettu matka: " << auto1.getKuljMatk() << std::endl << std::endl;

    auto1.kiihdytä(-200);
    auto1.kulje(1.5);

    std::cout << "Rekisteritnnus: " << auto1.getRekisteritunnus() << "\n"
        << "Huippunopeus: " << auto1.getHuippunopeus() << " km/h\n"
        << "Tamanhetkinen nopeus: " << auto1.getHetkNop() << " km/h\n"
        << "Kuljettu matka: " << auto1.getKuljMatk() << std::endl << std::endl;

    return 0;
}