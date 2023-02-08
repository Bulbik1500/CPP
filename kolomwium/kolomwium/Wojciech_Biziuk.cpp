#include <iostream>
#include<cstdlib>
#include<locale.h>
using namespace std;
// Wojciech Biziuk gruba 4

int main()
{
        setlocale(LC_CTYPE, "Polish");
        int height;
        cout << "jak duży ma być trójką, nie moze by mniejszy niż 3: ";
        cin >> height;
        cout << "podaj znaki A i B";
        string a, b;
        cout << "podaj A: ";
        cin >> a;
        cout << "podaj B: ";
        cin >> b;

        //   &
        //  & &
        // &&&&&6
        for (;;) {
            if (height >= 3) {
                for (int i = 1; i <= height; i++)
                {
                    for (int j = 1; j <= (height - i); j++)
                    {
                        cout << " ";
                    }

                    for (int k = 1; k <= i * 2 - 1; k++)
                    {
                        if (k == 1 || k == i * 2 - 1)
                        {
                            if (i % 2 != 0) {

                            cout << b;
                            }else{
                             cout << a;
                            }
                        }
                        else if (i == height)
                        {
                            cout << a;
                        }
                        else
                        {
                            cout << " ";
                        }

                    }
                    cout << endl;
                }


                cout << "zakonczyc program t/n: ";
                string odp;
                cin >> odp;
                if (odp == "t") {
                    exit(0);
                }
                else {
                    cout << "jak duży ma być trójką, nie moze by mniejszy niż 3: ";
                    cin >> height;
                }

            }
            else {
                cout << "podana wartosc jest nie poprawna!, podaj inna: ";
                cin >> height;
            }
        }
}

