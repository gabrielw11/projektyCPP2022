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

    void simie(string s)
    {
        imie=s;
    }
    void snazwisko(string s)
    {
        nazwisko=s;
    }
    void skierunek(string s)
    {
        kierunek=s;
    }
    void srok(string s)
    {
        rok=s;
    }


    Student(string i, string n, string k, string r)
    {
        imie=i;
        nazwisko=n;
        kierunek=k;
        rok=r;

    }
    Student(){}


    
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
    cout<< " numer grupy " << numer_grupy <<" limit miejsc "<< limit_miejsc << " "<< endl;
    for (size_t i = 0; i < limit_miejsc; i++)
    {
        cout<< tab[i].gimie() <<" "<< tab[i].gnazwisko() <<" "<< tab[i].gkierunek() <<" "<< tab[i].grok()<<endl;
    }
    

}

void Grupa::dodajStudenta( Student Stu)
{
    if (counter>9)
    {
        cout<<" "<<" nie mozna dodac "<<endl;
    }
    else
    {
        tab[counter]=Stu;
        counter++;
    }

    }


void Grupa::zmienNazwisko(string nazstare, string naznowe)
{
    int i;
    for ( i = 0; i < counter+1; i++)
    {
        if (tab[i].gnazwisko()==nazstare)
            break;
    }
    if(i==counter+1)
        cout<<"nie ma takiego nazwiska"<<" ";
    else
    tab[i].snazwisko(naznowe);
}


int main()
{
    Student stu("Jan", "Kowalski", "informatyka", "1");
    Student stu2("Jan", "Nowak", "informatyka", "2");
    Student stu3("Jan", "Kowal", "informatyka", "3");

    Grupa gru(1);
    gru.dodajStudenta(stu);
    gru.dodajStudenta(stu2);
    gru.dodajStudenta(stu3);
    gru.wypisz();
    gru.zmienNazwisko("Kowal", "Polak");
    gru.wypisz();

    Student *tab=new Student[2];
    tab[0].simie("Piotr");
    tab[0].snazwisko("Skala");
    tab[0].skierunek("fizyka");
    tab[0].srok("2");
    tab[1].simie("Zbigniew");
    tab[1].snazwisko("Matczak");
    tab[1].skierunek("fizyka");
    tab[1].srok("3");

    cout<<endl;

    gru.wypisz();
    for (size_t i = 0; i < 2; i++)
    {
        cout<< tab[i].gimie() <<" "<< tab[i].gnazwisko() <<" "<< tab[i].gkierunek() <<" "<< tab[i].grok()<<endl;
    }


    gru.dodajStudenta(tab[0]);
    gru.dodajStudenta(tab[1]);


    Student stu4("Jan1", "Kowalski1", "informatyka", "1");
    Student stu5("Jan2", "Nowak2", "informatyka", "2");
    Student stu6("Jan3", "Kowal3", "informatyka", "3");
    Student stu7("Jan4", "Kowalski4", "informatyka", "1");
    Student stu8("Jan5", "Nowak5", "informatyka", "2");
    Student stu9("Jan6", "Kowal6", "informatyka", "3");


    gru.dodajStudenta(stu4);
    gru.dodajStudenta(stu5);
    gru.dodajStudenta(stu6);
    gru.dodajStudenta(stu7);
    gru.dodajStudenta(stu8);
    gru.dodajStudenta(stu9);
    
    gru.wypisz();


    
    return 0;
}