#include <iostream>
using namespace std;

int main()
{
    int firstINT;
    int secondINT;
    cout << "Podaj pierwsza liczbe: ";
    cin >> firstINT;
    cout << "Podaj druga liczbe: ";
    cin >> secondINT;

    for (int i = 1; i <= firstINT; i++) {
        if (firstINT % i == 0)
            if (secondINT % i == 0)
                cout << i;
    }

    return 0;

}
// pszełdo kod 
//-Piersze to pobieramy dwie liczby do sprawdzenia.
//-tworzymy petnle która bedzie sie wykonywać aż nie przeproczy pierwszej podanej liczbie.
//-sprawdzamy if'm czy modulo z podanych liczb zwracza 0 if == tak to wysietlamy dzielnik(i).