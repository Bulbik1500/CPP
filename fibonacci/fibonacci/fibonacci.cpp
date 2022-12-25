#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 0;
    cout << "Podaj liczbe: ";
    cin >> n;
 

      long long a = 0, b = 1;
  
     for(i;i<n;i++)
     {
            b += a; 
            a = b-a; 
     }     
            cout<<a<<" ";
}

//pobieramy liczbe n
//dodajemy do siebie dwie poprzednie liczby 
//wyswietlamy wynik