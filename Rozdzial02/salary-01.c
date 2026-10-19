#include <stdio.h>

int main (void) {

    int wiek;
    int godziny_tydzien;
    int liczba_tygodni_w_roku = 52;
    float stawka_godzinowa;
    char plec;
    char imie_nazwisko[] = "Jan Nowak";

    godziny_tydzien = 40;
    stawka_godzinowa = 6.35;
    plec = 'M';
    wiek = 40;

    printf ("Masz %d lat i zarabiasz %.2f zł za godzinę.\n", wiek, stawka_godzinowa);
    printf ("W ciągu roku zarobisz: %.2f zł\n", godziny_tydzien * stawka_godzinowa * liczba_tygodni_w_roku);
    printf ("twoja płeć to: %c\n", plec);
    printf ("twoje imię i nazwisko to: %s\n", imie_nazwisko);

    return 0;
}