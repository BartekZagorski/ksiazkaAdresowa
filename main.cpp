#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenager.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazka1;
    ksiazka1.wypiszWszystkichUzytkownikow();
    ksiazka1.rejestracjaUzytkownika();
    ksiazka1.wypiszWszystkichUzytkownikow();

    return 0;
}
