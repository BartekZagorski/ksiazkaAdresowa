#include "Adresat.h"

    Adresat::Adresat(int id, int idUzytkownika, string imie, string nazwisko, string numerTelefonu, string email, string adres)
    {
        this -> id = id;
        this -> idUzytkownika = idUzytkownika;
        this -> imie = imie;
        this -> nazwisko = nazwisko;
        this -> numerTelefonu = numerTelefonu;
        this -> email = email;
        this -> adres = adres;
    }

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
