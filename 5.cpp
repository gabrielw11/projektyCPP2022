#include <iostream>

using namespace::std;

class wynik
{
    public:

    int ilosc;
    int suma;
   
    
};

 wynik fun(int *, int);

int main()
{
    int tab[10];
    for (size_t i = 0; i < 10; i++)
    {
        tab[i]=rand()%20 -10;
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout<<tab[i]<<endl;
    }
    
    wynik wyn=fun(tab, 10);
    cout<<endl<<wyn.ilosc<<"  "<<wyn.suma<<endl;


    return 0;
}
wynik fun(int * tab, int rozmiar)
{
    wynik ret;
    ret.ilosc=0;
    ret.suma=0;
    for (size_t i = 0; i < rozmiar; i++)
    {
        if (tab[i]>0)
            {
                ret.ilosc++;
            }
        else ret.suma+=tab[i];
    }
    return ret;
    
}