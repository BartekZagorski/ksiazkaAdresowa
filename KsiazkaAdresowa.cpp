#include "KsiazkaAdresowa.h"

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
    uzytkownikMenager.ustawIdZalogowanegoUzytkownika(uzytkownikMenager.logowanieUzytkownika());
    adresatMenager.wczytajAdresatowZalogowanegoUzytkownikaZPliku(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenager.wylogujUzytkownika(adresatMenager);
}
void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenager.dodajAdresata(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenager.wyswietlWszystkichAdresatow();
}
