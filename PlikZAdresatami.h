#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami :public PlikTekstowy
{
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami, int idOstatniegoAdresata = 0)
    : PlikTekstowy(nazwaPlikuZAdresatami)
    {
        this->idOstatniegoAdresata = idOstatniegoAdresata;
    };
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata (int idOstatniegoAdresata);
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunWybranegoAdresataWPliku(int idUsuwanegoAdresata);
    void edytujWybranegoAdresataWPliku(Adresat adresat);
};

#endif
