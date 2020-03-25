#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H

#include "PlikZUzytkownikami.h"
#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include <windows.h>


using namespace std;

class UzytkownikMenager
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    Uzytkownik podajDaneNowegoUzytkownika();

public:

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif