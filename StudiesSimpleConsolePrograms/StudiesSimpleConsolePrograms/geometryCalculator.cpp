#include <iostream>

using namespace std;

float ObliczPoleKwadratu(float bokA) {
    return bokA * bokA;
}

float ObliczPoleProstokata(float bokA, float bokB) {
    return bokA * bokB;
}

float ObliczPoleTrojkata(float podstawaA, float wysokoscNaA) {
    return 0.5 * podstawaA * wysokoscNaA;
}

float ObliczObwodKwadratu(float bokA) {
    return 4 * bokA;
}

float ObliczObwodProstokata(float bokA, float bokB) {
    return 2 * (bokA + bokB);
}

float ObliczObwodTrojkata(float bokA, float bokB, float bokC) {
    return bokA + bokB + bokC;
}

int main() {
    char wybor;
    char figura;
    float a, b, c, h;

    do {
        cout << "Co chcesz obliczyc?\n";
        cout << " o = obwod\n p = pole \n q = wyjdz \n";
        cin >> wybor;
        if (wybor != 'q') {
            cout << "Dla jakiej figury chcesz to obliczyc? (t = trojkat, p = prostokat, k = kwadrat)" << endl;
            cin >> figura;
        }

        switch (figura) {
        case 't':
            switch (wybor) {
            case 'o':
                cout << "Podaj 3 boki trojkata: " << endl;
                cin >> a >> b >> c;
                cout << "Obwod podanego trojkata to: " << ObliczObwodTrojkata(a, b, c) << endl;
                break;
            case 'p':
                cout << "Podaj podstawe i wysokosc trojkata" << endl;
                cout << "Podstawa: ";
                cin >> a;
                cout << "Wysokosc: ";
                cin >> h;
                cout << "Pole podanego trojkata to: " << ObliczPoleTrojkata(a, h) << endl;
                break;
            }
            break;
        case 'p':
            switch (wybor) {
            case 'o':
                cout << "Podaj dlugosci bokow prostokata" << endl;
                cin >> a >> b;
                cout << "Obwod prostokata to: " << ObliczObwodProstokata(a, b) << endl;
                break;
            case 'p':
                cout << "Podaj dlugosci bokow prostokata" << endl;
                cout << "Dlugosc boku A: ";
                cin >> a;
                cout << "Dlugosc boku B: ";
                cin >> b;
                cout << "Pole prostokata to: " << ObliczPoleProstokata(a, b) << endl;
                break;
            }
            break;
        case 'k':
            switch (wybor) {
            case 'o':
                cout << "Podaj dlugosc boku kwadratu" << endl;
                cin >> a;
                cout << "Obwod kwadratu to: " << ObliczObwodKwadratu(a) << endl;
                break;
            case 'p':
                cout << "Podaj dlugosc boku kwadratu" << endl;
                cout << "Dlugosc boku: ";
                cin >> a;
                cout << "Pole kwadratu to: " << ObliczPoleKwadratu(a) << endl;
                break;
            }
            break;
        default:
            cout << "Wprowadzono niepoprawne dane!";
            break;
        }
    } while (wybor != 'q');

    return 0;
}
