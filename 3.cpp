#include <iostream>

using namespace std;

int fun(string napis)
{
    int sum=0;
    cout<<sizeof(napis)<<"  "<<sizeof(char);
    int length = napis.length();
    for(size_t i = 0; i < length; i++)
    {
        cout<<" "<<i<<endl;
        if (0<napis[i]-48 && napis[i]-48 <10)
        {
            
            sum+=napis[i]-48;
            cout<<sum<<endl;
        }

    }
    return sum;
}

int main()
{
  string napis= "Ala kupila 3 kg pomaranczy, 12 jablek i 2 litry soku";
  int h=fun(napis);
  cout<<h;
  return 0;
}