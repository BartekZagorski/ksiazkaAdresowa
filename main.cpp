#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h"
#include <windows.h>

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka1("Uzytkownicy2.txt");
    ksiazka1.wypiszWszystkichUzytkownikow();
    ksiazka1.logowanieUzytkownika();
    ksiazka1.wyswietlWszystkichAdresatow();
    ksiazka1.wylogujUzytkownika();
    system("cls");
    ksiazka1.wypiszWszystkichUzytkownikow();
    ksiazka1.logowanieUzytkownika();
    ksiazka1.wyswietlWszystkichAdresatow();

    return 0;
}
