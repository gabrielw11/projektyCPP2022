#include <iostream>
#include <cmath>
using namespace std;

int fun(int);
void sort(int * tab, int size);
int findmax(int*, int);

void swap(int *xp, int *yp)
{
    //cout<< "swap przed zmiana "<< *xp << "  "<< *yp<<endl;
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
       // cout<< "swap po zmiana "<< *xp << "  "<< *yp<<endl;

}

int main()
{
    int a = 2345;
    int b=4149;
    int tab[]={2,6,4,6,3,6,2,24,6};
   // int ind = findmax(tab,9);
    
    //cout<< ind <<endl;
   // sort(tab,9);
    
    for(int i=0; i<9; i++ )
    {
       cout<<tab[i];
    }

    int res1, res2;
    res1=fun(a);
    res2=fun(b);
    cout<<endl<<res1<<" "<<res2;

   
    
   // cout<< fun(a) << " " << fun(b)<< endl;

    return 0;
}

int fun(int a)
{
    int b=a;
    int j=0;
    while(a>1)
    {
        a=a/10;
        j++;
    }
    cout<<"j ma wartosc"<<j<<endl;
    int *tab= new int[j];
    for (size_t i = 0; i<j; i++)
    {
        tab[i]=b%10;
        b/=10;
    }
     for (size_t i = 0; i<j; i++)
    {
        cout<<"tablica  "<<tab[j-i-1]<<endl;;
    }
    
    sort(tab, j);
    for (size_t i = 0; i<j; i++)
    {
        cout<<" sorted tablica  "<<tab[i]<<endl;;
    }


    int ret=0;
    for (size_t i = 0; i < j; i++)
    {
        ret=ret+tab[i]*pow(10, i);
        cout<<" ret "<<ret;
    }   

    return ret;
    
    
}

void sort(int * tab, int size)
{
  for (size_t i = size; i >0; i--)
  {
    int temp=findmax(tab,i);
    //int t = tab[temp];
    //tab[temp]=tab[i];
    //tab[i]=t; 
     swap(&tab[temp], &tab[i-1]);  
    }
  
}
int findmax(int*tab, int size)
{
    int max=0;
 for (size_t i = 0; i < size; i++)
    {
        if (tab[i]>tab[max])
            max=i;
       // cout<<" praca findmax "<< max<<" "<< tab[max]<< endl;
    }

    return max;
}