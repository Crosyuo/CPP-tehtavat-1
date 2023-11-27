#include <iostream>
#include "oliot.h"

int main() {
    Henkiloauto henkiloauto(350, 2014, 2000, 2, 4, 2);
    Kuormaauto kuormaauto(150, 2010, 6500, 4, 8, 10000);
    Lentokone lentokone(900, 2018, 300000, 14000);
    Laiva laiva(40, 2005, 2100000, 15);

    henkiloauto.tulostaTiedot();
    kuormaauto.tulostaTiedot();
    lentokone.tulostaTiedot();
    laiva.tulostaTiedot();

    return 0;
}