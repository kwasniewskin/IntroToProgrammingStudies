//Napisz program z tablicą 5x5 elementów. Tablice możesz wypełnić losowymi liczbami. Program ma zsumować osobno liczby parzyste i nieparzyste
//i wypisać ile ich jest np. Liczb parzystych 17, suma 82. Liczb nieparzystych 8, suma 34.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int tab[5][5];

void uzupelnijTabliceLiczbamiLosowymi() {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tab[i][j] = rand() % 100;
        }
    }
}
void wyswietlTablice() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << tab[i][j];
            if (tab[i][j] < 10) {
                cout << "  ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int SumaLiczbParzystych = 0;
    int IloscLiczbParzystych = 0;
    int SumaLiczbNieParzystych = 0;
    int IloscLiczbNieParzystych = 0;

    uzupelnijTabliceLiczbamiLosowymi();
    wyswietlTablice();

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tab[i][j] % 2 == 0) {
                SumaLiczbParzystych += tab[i][j];
                IloscLiczbParzystych++;
            }
            else {
                SumaLiczbNieParzystych += tab[i][j];
                IloscLiczbNieParzystych++;
            }
        }
    }

    cout << "Ilosc liczb PARZYSTYCH: " << IloscLiczbParzystych << " ich suma: " << SumaLiczbParzystych << endl;
    cout << "Ilosc liczb NIEPARZYSTYCH " << IloscLiczbNieParzystych << " ich suma: " << SumaLiczbNieParzystych << endl;

    return 0;
}
