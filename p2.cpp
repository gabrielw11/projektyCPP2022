#include <iostream>

using namespace std;

class Autokar;

class Pasazer
{
    string imie;
    string nazwisko;
    string rok_urodzenia;
    static int licznik;
        string gimie(){return imie;}


    public:
    
    Pasazer();
    Pasazer(string, string, string);
    Pasazer(const Pasazer &);

    int glicznik(){return licznik;}
    friend class Autokar;

};
Pasazer::Pasazer()
{
    licznik++;
}
Pasazer::Pasazer(string a, string b, string c)
{
    imie=a;
    nazwisko=b;
    rok_urodzenia=c;
    licznik++;
}
Pasazer::Pasazer(const Pasazer & wzor)
{
    imie=wzor.imie;
    nazwisko=wzor.nazwisko;
    rok_urodzenia=wzor.rok_urodzenia;
    licznik++;
    
}

class Autokar
{
    friend class Pasazer;
    int miejsce_docelowe;
    int vmax;
    static const int liczba_miejsc=10;
    Pasazer* tab[liczba_miejsc];
    int licznik;

    public:

    Autokar(const Autokar &);
    void wypisz();
    Autokar(Pasazer);
};

Autokar::Autokar(Pasazer p)
{
    tab[licznik]=&p;
    licznik++;
}

Autokar::Autokar(const Autokar & wzor)
{
    miejsce_docelowe = wzor.miejsce_docelowe;
    vmax = wzor.vmax;
    
}


void Autokar::wypisz()
{
    for(int i=0; i<3/*Pasazer::glicznik()*/; i++)
    {
        cout<<tab[i]->imie<<"  "<<tab[i]-> nazwisko<< "  "<<tab[i]->rok_urodzenia<< " licz "<<tab[i]->licznik<<endl;
    }    
}



int main()
{
    Pasazer pas1;
    Pasazer pas2("Tadek", "Wegrzyn", "2000");
    Pasazer pas3(pas2);
    Autokar aut(pas1);
    aut.wypisz();


    return 0;
}