#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string NAZWA)
:uzytkownikMenager(NAZWA)
{
    uzytkownikMenager.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenager.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenager.wypiszWszystkichUzytkownikow();
}
