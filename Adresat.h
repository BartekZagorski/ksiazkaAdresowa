#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int id, idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:

    Adresat(int=0,int=0,string="",string="",string="",string="",string="");
    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
    void ustawId (int liczba);
    void ustawIdUzytkownika(int liczba);
    void ustawImie(string IMIE);
    void ustawNazwisko(string NAZWISKO);
    void ustawNumerTelefonu(string NUMER_TELEFONU);
    void ustawEmail(string EMAIL);
    void ustawAdres(string ADRES);
};

#endif
