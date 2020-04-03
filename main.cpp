#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h"
#include <windows.h>

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka1;
    ksiazka1.wypiszWszystkichUzytkownikow();
    ksiazka1.logowanieUzytkownika();
    ksiazka1.wyswietlWszystkichAdresatow();
    ksiazka1.usunAdresata();
    ksiazka1.wyswietlWszystkichAdresatow();
    ksiazka1.dodajAdresata();
    ksiazka1.wyswietlWszystkichAdresatow();

    return 0;
}
