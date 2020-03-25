#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    void ustawId (int numerID);
    void ustawLogin (string podanyLogin);
    void ustawHaslo (string podaneHaslo);
    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};

#endif
