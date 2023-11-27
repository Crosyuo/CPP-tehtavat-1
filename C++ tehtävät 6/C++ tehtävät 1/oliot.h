#pragma once

#include <iostream>

class Ajoneuvo {
private:
    int _huippunopeus_;
    int _kayttoonottovuosi_;
    int _paino_;

public:
    Ajoneuvo(int huippunopeus, int kayttoonottovuosi, int paino);
    void tulostaTiedot() const;
};

class Auto : public Ajoneuvo {
private:
    int _ovet;
    int _renkaat;

public:
    Auto(int huippunopeus, int kayttoonottovuosi, int paino, int ovet, int renkaat);
    void tulostaTiedot() const;
};

class Henkiloauto : public Auto {
private:
    int _matkustajienMaara;

public:
    Henkiloauto(int huippunopeus, int kayttoonottovuosi, int paino, int ovet, int renkaat, int matkustajienMaara);
    void tulostaTiedot() const;
};

class Kuormaauto : public Auto {
private:
    int _kuormanMaksimipaino;

public:
    Kuormaauto(int huippunopeus, int kayttoonottovuosi, int paino, int ovet, int renkaat, int kuormanMaksimipaino);
    void tulostaTiedot() const;
};

class Lentokone : public Ajoneuvo {
private:
    int _maksimiLentokorkeus;

public:
    Lentokone(int huippunopeus, int kayttoonottovuosi, int paino, int maksimiLentokorkeus);
    void tulostaTiedot() const;
};

class Laiva : public Ajoneuvo {
private:
    int _maksimiSyvyys;

public:
    Laiva(int huippunopeus, int kayttoonottovuosi, int paino, int maksimiSyvyys);
    void tulostaTiedot() const;
};