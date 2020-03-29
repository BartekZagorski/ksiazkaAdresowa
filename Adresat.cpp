#include "Adresat.h"

    int Adresat::pobierzId()
    {
        return id;
    }
    int Adresat::pobierzIdUzytkownika()
    {
        return idUzytkownika;
    }
    string Adresat::pobierzImie()
    {
        return imie;
    }
    string Adresat::pobierzNazwisko()
    {
        return nazwisko;
    }
    string Adresat::pobierzNumerTelefonu()
    {
        return numerTelefonu;
    }
    string Adresat::pobierzEmail()
    {
        return email;
    }
    string Adresat::pobierzAdres()
    {
        return adres;
    }
    void Adresat::ustawId (int liczba)
    {
        id = liczba;
    }
    void Adresat::ustawIdUzytkownika(int liczba)
    {
        idUzytkownika = liczba;
    }
    void Adresat::ustawImie(string IMIE)
    {
        imie = IMIE;
    }
    void Adresat::ustawNazwisko(string NAZWISKO)
    {
        nazwisko = NAZWISKO;
    }
    void Adresat::ustawNumerTelefonu(string NUMER_TELEFONU)
    {
        numerTelefonu = NUMER_TELEFONU;
    }
    void Adresat::ustawEmail(string EMAIL)
    {
        email = EMAIL;
    }
    void Adresat::ustawAdres(string ADRES)
    {
        adres = ADRES;
    }
