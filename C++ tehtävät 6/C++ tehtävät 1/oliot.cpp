#include "oliot.h"
#include <iostream>

Ajoneuvo::Ajoneuvo(int huippunopeus, int kayttoonottovuosi, int paino) :
    _huippunopeus_(huippunopeus), _kayttoonottovuosi_(kayttoonottovuosi), _paino_(paino) {}

void Ajoneuvo::tulostaTiedot() const {
    std::cout << "Huippunopeus: " << _huippunopeus_ << " km/h\n"
        << "Käyttöönottovuosi: " << _kayttoonottovuosi_ << "\n"
        << "Paino: " << _paino_ << " kg\n";
}

Auto::Auto(int huippunopeus, int kayttoonottovuosi, int paino, int ovet, int renkaat) :
    Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), _ovet(ovet), _renkaat(renkaat) {}

void Auto::tulostaTiedot() const {
    Ajoneuvo::tulostaTiedot();
    std::cout << "Ovien lukumäärä: " << _ovet << "\n"
        << "Renkaiden lukumäärä: " << _renkaat << "\n";
}

Henkiloauto::Henkiloauto(int huippunopeus, int kayttoonottovuosi, int paino, int ovet, int renkaat, int matkustajienMaara) :
    Auto(huippunopeus, kayttoonottovuosi, paino, ovet, renkaat), _matkustajienMaara(matkustajienMaara) {}

void Henkiloauto::tulostaTiedot() const {
    Auto::tulostaTiedot();
    std::cout << "Matkustajien maksimimäärä: " << _matkustajienMaara << "\n\n";
}

Kuormaauto::Kuormaauto(int huippunopeus, int kayttoonottovuosi, int paino, int ovet, int renkaat, int kuormanMaksimipaino) :
    Auto(huippunopeus, kayttoonottovuosi, paino, ovet, renkaat), _kuormanMaksimipaino(kuormanMaksimipaino) {}

void Kuormaauto::tulostaTiedot() const {
    Auto::tulostaTiedot();
    std::cout << "Kuorman maksimipaino: " << _kuormanMaksimipaino << " kg\n\n";
}

Lentokone::Lentokone(int huippunopeus, int kayttoonottovuosi, int paino, int maksimiLentokorkeus) :
    Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), _maksimiLentokorkeus(maksimiLentokorkeus) {}

void Lentokone::tulostaTiedot() const {
    Ajoneuvo::tulostaTiedot();
    std::cout << "Maksimilentokorkeus: " << _maksimiLentokorkeus << " m\n\n";
}

Laiva::Laiva(int huippunopeus, int kayttoonottovuosi, int paino, int maksimiSyvyys) :
    Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), _maksimiSyvyys(maksimiSyvyys) {}

void Laiva::tulostaTiedot() const {
    Ajoneuvo::tulostaTiedot();
    std::cout << "Maksimisyvyys: " << _maksimiSyvyys << "\n\n";
}