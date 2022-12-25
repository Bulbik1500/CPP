#include <iostream>
#include "pytanie.h"
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void pytanie::wczytaj() {

	fstream plik;
	plik.open("quiz.txt", ios::in);

	if (plik.good() == false) {
		cout << "nie uda�o sie otworzy� pliku";
		exit(0);
	}

	int nr_linii = (nr_pytania - 1) * 6 + 1;
	int aktualny_nr = 1;
	string linia;
	while (getline(plik, linia))
	{
		if (aktualny_nr == nr_linii) tresc = linia;
		if (aktualny_nr == nr_linii + 1) a = linia;
		if (aktualny_nr == nr_linii + 2) b = linia;
		if (aktualny_nr == nr_linii + 3) c = linia;
		if (aktualny_nr == nr_linii + 4) d = linia;
		if (aktualny_nr == nr_linii + 5) poprawna = linia;
		aktualny_nr++;
	}
	plik.close();
}

void pytanie::zadaj() {
	cout << endl << tresc << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "<-------------------->"<< endl;
	cout << endl << "Odpowiedz: ";
	cin >> odpowiedz;


}

void pytanie::sprawdz() {
	if (odpowiedz == poprawna) {
		punkt = 1;
	}
	else {
		punkt = 0;
	}
}