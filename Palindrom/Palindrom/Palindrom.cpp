#include<iostream>
#include<cstring>
using namespace std;

bool czy_palindrom(char tab[])
{
	int i = 0, j = strlen(tab) - 1; 

	while (i < j) 
	{
		if (tab[i] != tab[j]) 
			return false;

		++i; 
		--j; 
	}

	return true; 
}

int main()
{
	char tab[100];
	cout << "Podaj wyraz: ";
	cin >> tab;

	if (czy_palindrom(tab)) 
		cout << "Wyraz " << tab << " jest palindromem" << endl;
	else
		cout << "Wyraz " << tab << " nie jest palindromem" << endl;

	return 0;
}
//pobieramy wyraz i kładamy go tabeli
//lub if(czy_palindrom(tab)==true) lub if(czy_palindrom(tab)==1)
//ustawiam liczniki "i" i "j" na pierwszy i ostatni znak wyrazu tab 
//gdy znaki nie będą się zgadzać, to wyraz nie jest palindromem
//pętla wykonuje się do momentu spotkania liczników
//zwracamy true/false
//wyswietlamy wynik