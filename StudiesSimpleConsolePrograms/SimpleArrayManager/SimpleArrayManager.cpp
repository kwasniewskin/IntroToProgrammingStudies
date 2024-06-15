//Napisz program, używając switch case, if, pętli oraz funkcji. W programie stwórz tablice 10 elementową, użytkownik podaje 10 liczb z konsoli
//a następnie wybiera z prostego menu co ma zrobić:
//1. obróć wartości w tablicy
//2. wypisz tablice
//3. wypisz największą i najmniejszą liczbę z tablicy
//4. wpisz nowe liczby

#include <iostream>

using namespace std;

int tab[10];
int tabMax;
int tabMin;

void wcisnijEnterAbyKontynuowac() {
    //Oczekuje na wcisniecie klawisza enter i dopiero kontynuuje program
    cout << "Wcisnij ENTER aby kontynuowac... \n";
    cin.ignore();
    cin.get();
}
void uzupelnianieTablicy() {
    cout << "Uzupelnij tablice 10 elementowa" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " element: ";
        cin >> tab[i];
    }
}
void wyczyscOknoKonsoli() {
    cout << "\033[2J\033[1;1H";
}
void obrocWartosciWTablicy() {
    int temp;
    for (int i = 0; i < 5; i++) {
        temp = tab[i];
        tab[i] = tab[9 - i];
        tab[9 - i] = temp;
    }
}
void wypiszTablice() {
    cout << "Zawartosc Tablicy: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
    wcisnijEnterAbyKontynuowac();

}
void wypiszMaxiMinZTablicy() {
    tabMax = tab[0];
    tabMin = tab[0];
    for (int i = 0; i < 10; i++) {
        if (tab[i] < tabMin)
            tabMin = tab[i];
        if (tab[i] > tabMax)
            tabMax = tab[i];
    }

    cout << "Minimalna wartosc w tablicy: " << tabMin << endl;
    cout << "Maksymalna wartosc w tablicy: " << tabMax << endl;
    wcisnijEnterAbyKontynuowac();
}
void wpiszNoweLiczby() {
    uzupelnianieTablicy();
}

int main()
{
    bool czyKoniec = false;
    int wybor;

    uzupelnianieTablicy();
    wyczyscOknoKonsoli();

    do {
        wyczyscOknoKonsoli();

        cout << "|Operacja wykonana|" << endl;
        cout << "Co chcesz wykonac nastepnie? " << endl;
        cout << "1. obroc wartości w tablicy" << endl;
        cout << "2. wypisz tablice" << endl;
        cout << "3. wypisz największa i najmniejsza liczbę z tablicy" << endl;
        cout << "4. wpisz nowe liczby" << endl;
        cout << "5. zakoncz program" << endl;
        cin >> wybor;

        switch (wybor) {
        case 1:
            obrocWartosciWTablicy();
            cout << "Tablica zostala obrocona." << endl;
            wcisnijEnterAbyKontynuowac();
            break;
        case 2:
            wypiszTablice();
            break;
        case 3:
            wypiszMaxiMinZTablicy();
            break;
        case 4:
            wpiszNoweLiczby();
            break;
        case 5:
            czyKoniec = true;
            break;
        default:
            cout << "Niepoprawny wybor, sproboj ponownie." << endl;
            wcisnijEnterAbyKontynuowac();
            break;

        }
    } while (czyKoniec == false);

    cout << "Zakonczono dzialanie programu!";

    return 0;
}
