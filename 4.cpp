#include <iostream>

using namespace::std;


class student
{
    public:
    string imie;
    string nazwisko;
    string kierunek;
    int rok;
    int semestr;

};

int main()
{
    student tab[3];
    tab[0].imie="Gabriel";
    tab[0].nazwisko="Winiarski";
    tab[0].kierunek="it";
    tab[0].rok=2;
    tab[0].semestr=3;

    cout<<tab[0].imie<<tab[0].nazwisko<<tab[0].kierunek;


    return 0;
}
