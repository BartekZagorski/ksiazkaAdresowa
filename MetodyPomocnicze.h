#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <string>
#include "Uzytkownik.h"

using namespace std;

class MetodyPomocnicze
{
public:
    static string wczytajLinie();
    static string konwerjsaIntNaString(int liczba);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static bool czyPlikJestPusty(fstream& plikTekstowy);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int konwersjaStringNaInt(string liczba);
    static int wczytajLiczbeCalkowita();
    static char wczytajZnak();
};

#endif
