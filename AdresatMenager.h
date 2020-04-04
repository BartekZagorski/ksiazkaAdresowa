#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int podajIdWybranegoAdresata();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
    AdresatMenager(string, int = 0);
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    int usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
};

#endif
