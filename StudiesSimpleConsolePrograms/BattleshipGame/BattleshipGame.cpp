//GRA W STATKI
#include <iostream>

using namespace std;

int plansza[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1},
    {0, 0, 0, 0, 0}
};

char strzalyGracza[5][5] = {
    {'?', '?', '?', '?', '?'},
    {'?', '?', '?', '?', '?'},
    {'?', '?', '?', '?', '?'},
    {'?', '?', '?', '?', '?'},
    {'?', '?', '?', '?', '?'}
};


void WyczyscKonsole() {
    cout << "\033[2J\033[1;1H";
}

void WyswietlPlanszeGracza() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << " " << strzalyGracza[i][j] << " ";
        }
        cout << endl;
    }
}

bool CzyGraSkonczona() {
    int sumaX = 0;
    int suma1 = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (strzalyGracza[i][j] == 'X')
                sumaX++;

            if (plansza[i][j] == 1)
                suma1++;
        }
    }

    return suma1 == sumaX;
}

int main()
{

    int strzalX;
    int strzalY;

    cout << "Witaj w grze w statki!" << endl;
    cout << "(podaj x potem y na planszy 5x5)" << endl;

    do {
        WyczyscKonsole();

        WyswietlPlanszeGracza();

        cout << "Wybierz pole w ktore chcesz strzelic: ";
        cin >> strzalY >> strzalX;

        strzalX -= 1;
        strzalY -= 1;

        if (plansza[strzalX][strzalY] == 1) {
            strzalyGracza[strzalX][strzalY] = 'X';
        }
        else {
            strzalyGracza[strzalX][strzalY] = 'O';
        }

    } while (!CzyGraSkonczona());

    cout << "Gratulacje WYGRALES!!!";


    return 0;
}
