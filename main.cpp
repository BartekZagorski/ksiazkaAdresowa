#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka1("Uzytkownicy2.txt");
    ksiazka1.wypiszWszystkichUzytkownikow();
    ksiazka1.logowanieUzytkownika();
    ksiazka1.dodajAdresata();
    ksiazka1.zmianaHaslaZalogowanegoUzytkownika();
    ksiazka1.wypiszWszystkichUzytkownikow();


    return 0;
}
