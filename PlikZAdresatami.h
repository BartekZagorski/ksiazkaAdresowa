#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

public:
    PlikZAdresatami(): nazwaPlikuZAdresatami("Adresaci.txt") {};
    void dopiszAdresataDoPliku(Adresat adresat);
};

#endif
