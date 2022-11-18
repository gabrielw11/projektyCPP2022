#include <iostream>

using namespace::std;

class Student
{
    string imie;
    string nazwisko;
    string kierunek;
    string rok;


    public:
    string gimie()  {return imie;}
    string gnazwisko()  {return nazwisko;}
    string gkierunek()  {return kierunek;}
    string grok()  {return rok;}

    void snazwisko(string s)
    {
        nazwisko=s;
    }


    Student(string i, string n, string k, string r)
    {
        imie=i;
        nazwisko=n;
        kierunek=k;
        rok=r;

    }


    
};
class Grupa
{
    int numer_grupy;
    static const int limit_miejsc=10;
    Student tab[limit_miejsc];

    public:
    static int counter;
    void wypisz();
    void dodajStudenta( Student );
    void zmienNazwisko(string, string);

    Grupa(int n )
    {
        numer_grupy=n;
    }

};

int Grupa::counter=0;



void Grupa::wypisz()
{
    cout<< numer_grupy <<" "<< limit_miejsc;
    for (size_t i = 0; i < limit_miejsc; i++)
    {
        cout<< tab[i].gimie() << tab[i].gnazwisko() << tab[i].gkierunek() << tab[i].grok()<<endl;
    }
    

}

void Grupa::dodajStudenta( Student Stu)
{
    tab[counter]=Stu;
    counter++;
}

void Grupa::zmienNazwisko(string nazstare, string naznowe)
{
    int i;
    for ( i = 0; i < counter; i++)
    {
        if (tab[i].gnazwisko()==nazstare)
            break;
    }

    tab[i].snazwisko(naznowe);
}


int main()
{
    Student stu("a", "b", "c", "d");
    //Grupa gru(1);
    //gru.dodajStudenta(stu);
    //gru.wypisz();
    
    return 0;
}