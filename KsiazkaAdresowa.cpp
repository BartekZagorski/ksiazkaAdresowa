#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
:
    uzytkownikMenager(nazwaPlikuZUzytkownikami),
    NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenager = NULL;
    }

KsiazkaAdresowa::~KsiazkaAdresowa()
{
    delete adresatMenager;
    adresatMenager = NULL;
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenager.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenager.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenager.logowanieUzytkownika();
    if (uzytkownikMenager.czyUzytkownikJestZalogowany())
    {
        adresatMenager = new AdresatMenager (NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
    }
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenager.ustawIdZalogowanegoUzytkownika(0);
    delete adresatMenager;
    adresatMenager = NULL;
}
void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenager->dodajAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenager->wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::usunAdresata()
{
    adresatMenager->usunAdresata();
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikMenager.czyUzytkownikJestZalogowany();
}
void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenager->edytujAdresata();
}
