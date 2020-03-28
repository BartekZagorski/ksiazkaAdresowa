#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenager uzytkownikMenager;
public:
    KsiazkaAdresowa(string NAZWA);
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
