#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H

#include "PlikZUzytkownikami.h"
#include "AdresatMenager.h"
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
    UzytkownikMenager (string, int = 0);

    void ustawIdZalogowanegoUzytkownika(int ID);
    int pobierzIdZalogowanegoUzytkownika();

    bool czyUzytkownikJestZalogowany();
    void wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
};

#endif
