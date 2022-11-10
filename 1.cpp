#include <iostream>

using namespace std;

int findmax(int * ,int);
void swap( int *, int *);
int partition(int * arr, int low, int high);
int partition2(int * arr, int low, int high);
void quicksort(int *, int , int);
int * f( int *, int);

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i
        = (low
           - 1); // Index of smaller element and indicates
                 // the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
  
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
  
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int tab[100];
    for(int i=0; i<100; i++)
    {
        tab[i]=rand()%180 +20;
    }
   for(int i=0; i<100; i++)
    {
        cout<< tab[i] <<" ";
    }

    int x =findmax(tab, 100);
    cout<<"  "<< tab[x];
    
    int * ptr = &tab[x];
    cout << "xd"<<*ptr << " " << &x << endl;
    
   //int ab= partition2(tab, 0, 99);
   quicksort(tab, 0, 99);
   cout<<"df";

    for(int i=0; i<100; i++)
    {
        cout<< 'd'<<tab[i] <<" ";
    }
    int * tabniep=f(tab,100);
    cout<<"haha  "<<sizeof(tabniep)/sizeof(tabniep[0]);
    for (size_t i = 0; i < 48; i++)
    {
        cout<<endl<<i<<"  "<<tabniep[i]<< " ";
    }
    
    return 0;

    
}

int findmax(int *tab, int size)
{
    int max= tab[0];
    int index=0;
    for (int i = 1; i < size ;i++)
    {   
        if (tab[i]> max)
        {
            max= tab[i];
            index=i;
        }
    /* code */
    }   
    return index;
}

void swap (int * a, int *b)
{
    int c = *b;
    *b=*a;
    *a=c;
}
/*
 int partition(int * arr, int low, int high)
 {
    int pivot= arr[high];
    int j;
    int licz=0;
    for (int i = 0; i < high; i++)
    {
        //cout<< "sprawdzam1" << " "<< i;
        
        if (arr[high-i]<arr[high])
        {
                            //cout<< "sprwdzam2"<< " ";

            for ( j = 0; j < high-i; j++)
            {
                if (arr[j]>arr[high])
                {
                    swap(&arr[high-i], &arr[j]);
                    licz++;
                }
                //cout<< "sprwdzam2"<< " ";
            }
            
        }
    }
        cout<<endl<<licz<<endl; 

    return 0;
 
 } */


int partition2(int * arr, int low, int high)
{
    int i = low-1;
    int pivot= arr[high];

    for(int j =low; j<high; j++)
    {
        if (arr[j]>pivot)
        {
            i++;
            swap(&arr[j], &arr[i]);
        }

    }
    swap(&arr[high], &arr[i+1]);
    return (i+1);
}

void quicksort(int* arr, int low, int high)
{
    if(low<high){

cout<<"D";
    int pivot= partition2(arr, low, high);
    quicksort(arr, low, pivot-1);
    quicksort(arr, pivot+1, high);
    }
     
    
    

}


int * f( int * tab, int rozmiar)
{
    int * arr;
    int j=0;
    for (size_t i = 0; i < rozmiar; i++)
    {
        if (tab[i]%2==1)
        {
        j++;  
        }
    }
    cout<<endl<<j;
 arr= new int[j];
 int i=0;
 for (size_t k = 0; k < j; k++)
 {
    for (i; i < rozmiar; i++)
    {  
    if (tab[i]%2==1)
    {
     arr[k]=tab[i];
     k++;
    }
    }    
 }
 
 
 return arr;

}
