#include <iostream>
using namespace std;

int fun(int);
void sort(int * tab, int size);
int findmax(int*, int);

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int a = 2345;
    int b=4149;
    int tab[]={2,6,4,6,3,6,2,24,6};
    int ind = findmax(tab,9);
    
    cout<< ind <<endl;
    sort(tab,9);
    
    for(int i=0; i<9; i++ )
    {
       cout<<tab[i];
    }
   
    
   // cout<< fun(a) << " " << fun(b)<< endl;

    return 0;
}

int fun(int a)
{
    int j=0;
    while(a>1)
    {
        a=a/10;
        j++;
    }
    int *tab= new int[j];
    for (size_t i = 0; i<j; i++)
    {
        tab[j-i-1]=a%(10^(j-i-1));
    }
    
    sort(tab, j);

    int ret=0;
    for (size_t i = 0; i < j; i++)
    {
        ret+=tab[0]^i;
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
     swap(&tab[temp], &tab[i]);  
    }
  
}
int findmax(int*tab, int size)
{
    int max=0;
 for (size_t i = 0; i < size; i++)
    {
        if (tab[i]>tab[max])
            max=i;
    }

    return max;
}