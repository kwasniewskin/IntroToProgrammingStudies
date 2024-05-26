#include <iostream>

using namespace std;

int main() {
    float tablica[10];
    float suma = 0.0;
    float najwieksza;
    float najmniejsza;

    cout << "Podaj 10 liczb:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tablica[i];
        suma += tablica[i];
    }

    najwieksza = tablica[0];
    for (int i = 1; i < 10; ++i) {
        if (tablica[i] > najwieksza) {
            najwieksza = tablica[i];
        }
    }

    najmniejsza = tablica[0];
    for (int i = 1; i < 10; ++i) {
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];
        }
    }

    cout << "Najwieksza wartosc: " << najwieksza << endl;
    cout << "Najmniejsza wartosc: " << najmniejsza << endl;

    return 0;
}
