#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct samochody{
    string marka;
    string nazwa;
    string poj;
} auto1;

int main()
{
 
    int i;
    cout << "ile samochodow dodac?: ";
    cin >> i;

    string * tablica = new string[i];
    string autodopliku;

    fstream file;
    file.open("auto.txt", ios::out | ios::app );
    for (int x = 0; x < i; x++) {
        cout << "Podaj marke " << endl;
        cin >> auto1.marka;
        cout << "Podaj nazwe " << endl;
        cin >> auto1.nazwa;
        cout << "Podaj podaj pojemość " << endl;
        cin >> auto1.poj;
        autodopliku  = auto1.marka + "|" + auto1.marka + "|" + auto1.poj;

         tablica[x] = autodopliku;
        file << tablica[x];
        cout << endl;
    }
   
    file.close();


}


