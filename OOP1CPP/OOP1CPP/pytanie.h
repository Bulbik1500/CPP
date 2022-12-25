#include <iostream>
using namespace std;

class pytanie {
	public:
		string tresc;
		string a, b, c, d;
		int nr_pytania;
		string poprawna;
		string odpowiedz;
		int punkt;


		void wczytaj(); // wczytuje pytania z pliku	
		void zadaj();
		void sprawdz();
};