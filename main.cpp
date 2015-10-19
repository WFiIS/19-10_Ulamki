#include <iostream>

using namespace std;

int main()
{
    int licznik_1, mianownik_1, licznik_2, mianownik_2, licznik_wynik, mianownik_wynik, calosci_wynik, reszta;

    cout << "Podaj licznik pierwszego ulamka: ";
    cin >> licznik_1;
    cout << "Podaj mianownik pierwszego ulamka: ";
    cin >> mianownik_1;
    cout << "Podaj licznik drugiego ulamka: ";
    cin >> licznik_2;
    cout << "Podaj mianownik drugiego ulamka: ";
    cin >> mianownik_2;

    if (mianownik_1 == mianownik_2) {
        licznik_wynik = licznik_1 + licznik_2;
        mianownik_wynik = mianownik_1;
    } else {
        licznik_wynik = licznik_1 * mianownik_2 + licznik_2 * mianownik_1;
        mianownik_wynik = mianownik_1 * mianownik_2;
    }

    reszta = licznik_wynik % mianownik_wynik;

    calosci_wynik = (licznik_wynik - reszta) / mianownik_wynik;
    licznik_wynik = reszta;

    if (reszta != 0) {
        for (int i = mianownik_wynik; i > 0; i--) {
            if ((licznik_wynik % i == 0) && (mianownik_wynik % i == 0)) {
                licznik_wynik = licznik_wynik / i;
                mianownik_wynik = mianownik_wynik / i;
            }
        }
    } else {
        licznik_wynik = 0;
        mianownik_wynik = 0;
    }

    cout << "Wynik to: " << calosci_wynik << " i " << licznik_wynik << "/" << mianownik_wynik << "." << endl;


    return 0;
}
