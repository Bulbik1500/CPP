#include <iostream>
using namespace std;

void zadanie3() {
    int A, B;
    cout << "podaj liczbe A i B: " << endl;
    cout << "podaj A: ";
    cin >> A;
    cout << "podaj B: ";
    cin >> B;
    while (A != B) {
        if (A > B) {
             A -= B;
        }
        else
        {
            B -= A;
        }
    }
    cout << "wynik to " << A;
}

void zadanie4() {
    int A;
    int B = 0;
    cout << "Podaj liczbe :";
    cin >> A;
    while (A != 0) {
        B += A % 10;
        A = A / 10;
    }
    cout << "twoj wynik to: " << B;
}

void zadanie5() {
    int A;
    cout << "Podaj liczbe: ";
    cin >> A;
    if (A < 2) {
        cout << "Twoja liczba nie jest pierwsza";
    }
    else {
        for (int i = 2; i * i <= A; i++) {
            if (A % 2 == 0) {
                cout << "Twoja liczba nie jest pierwsza";
            }
        }
        cout << "Twoja liczba jest pierwsza";
    }
}

void zadanie6(){
    int A;
    int i = 0;

    string lisc = "*";
    string lisc2 = "**";
    string spc = " ";
    cout << "ja duze drzwko ma byc: ";
    cin >> A;
    while (i < A) {
        for (int x = i; x < A; x++) {
            cout << spc;
        }
        cout << lisc << endl;
        lisc = lisc + lisc2;
        i++;
    }
     if (A %2 != 0) {
            i++;
        while (A % 2 < i) {
            cout << spc;
            i--;
         }
        cout << "|" << endl;
     }
     else {
         while (A % 2 < i) {
             cout << spc;
             i--;
         }
         cout << "|" << endl;
     }

  
 




}// ta pierdolona hojinka


void drzewoBTS() {
    /*
        5 <-- dziel i zyciezaj
    3       7
  2   4   6   9
 1          8   10



    */
    //tworzenie tabli drzewa
}


int main()
{
     /* cout << "Witaj w menu: " << endl;
    cout << "1 Zadanie3 " << endl;
    cout << "2 Zadanie4 " << endl;
    cout << "3 Zadanie5 " << endl;
    cout << "4 Zadanie6 " << endl;
    */
    zadanie6
    ();
    return 0;
}


