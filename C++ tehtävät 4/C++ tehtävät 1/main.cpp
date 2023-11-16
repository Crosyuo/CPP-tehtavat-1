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
};

int main() {
    Auto auto1;
    auto1.set_rekisteritunnus("ABC-123");
    auto1.set_huippunopeus(142);

    std::cout << "Rekisteritnnus: " << auto1.getRekisteritunnus() << "\n"
        << "Huippunopeus: " << auto1.getHuippunopeus() << " km/h\n"
        << "Tamanhetkinen nopeus: " << auto1.getHetkNop() << " km/h\n"
        << "Kuljettu matka: " << auto1.getKuljMatk() << std::endl;

    return 0;
}