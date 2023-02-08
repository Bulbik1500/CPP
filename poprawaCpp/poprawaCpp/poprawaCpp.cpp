#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct {
	string team;
}team;

void readingfile() {
	ifstream Wodczyt("druzyny.txt");
	string wiersz;
	while (!Wodczyt.eof()) {
		getline(Wodczyt, wiersz);
		cout << wiersz << endl;
	}
	Wodczyt.close();
}
void saveTotable() {
	int i = 0;
	string table[1000];
	ifstream fin;
	fin.open("druzyny.txt");
	string wiersz;
	while (!fin.eof()) {
		getline(fin, wiersz);
		team.team = wiersz;
		table[i] = team.team;
		i++;
	}
	fin.close();

	for (int x = 0; x < i; x++) {
		cout << table[x] << endl;
	}

}
void newTeam() {

	int id;
	string nazwadruzyny, miasto;
	cout << "podaj id druzyny: ";
	cin >> id; cout << endl;
	cout << "podaj nazwe druzyny: ";
	cin >> nazwadruzyny; cout << endl;
	cout << "podaj miasto: ";
	cin >> miasto;
	fstream fsave;
	fsave.open("druzyny.txt", ios::out | ios::app);
	fsave << id << "	" << nazwadruzyny << "	" << miasto;
	fsave.close();
}
int main()
{
	saveTotable();
}

