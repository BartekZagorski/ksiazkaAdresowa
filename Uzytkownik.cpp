#include "Uzytkownik.h"

void Uzytkownik::ustawId (int numerID)
    {
        id = numerID;
    }
void Uzytkownik::ustawLogin (string podanyLogin)
    {
        login = podanyLogin;
    }
void Uzytkownik::ustawHaslo (string podaneHaslo)
    {
        haslo = podaneHaslo;
    }
int Uzytkownik::pobierzId()
    {
        return id;
    }
string Uzytkownik::pobierzLogin()
    {
        return login;
    }
string Uzytkownik::pobierzHaslo()
    {
        return haslo;
    }

