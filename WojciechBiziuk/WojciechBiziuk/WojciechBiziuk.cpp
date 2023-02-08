#include <locale.h>
#include <iostream>
#include<string>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;

void read() {
    string line;
    int x = 0;
    fstream f;
    string  tab[200];
    f.open("mail.txt",  ios::in);
    while (!f.eof()) {
        getline(f, line);
        line = line + ",";
      
        tab[x] = line;
        cout << tab[x];
        x++;
        
    }
    f.close();
    ofstream zapis("mail.tx");
    for (int i = 0; i < x; i++) {
        zapis << tab[i];
    }
}




int main()
{
    read();
}




