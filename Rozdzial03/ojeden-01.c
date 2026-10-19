#include <stdio.h>

int main (void) {

    // wartości początkowe zmiennych
    int n1 = 1;
    int n2 = 1;

    printf ("na poczatku n1=%d, a n2=%d\n", n1, n2);

    n2 = n1++; // najpierw następuje przypisanie, potem inkrementacja: n2 = 1, n1 = 2
    printf ("Po n2 = n1++, n1 = %d, a n2 = %d\n", n1, n2);

    n2 = n1--; // najpierw nastepuje przypisanie, potem dekrementacja: n2 = 2, n1 = 1
    printf ("Po n2 = n1--, n1 = %d, a n2 = %d\n", n1, n2);

    // resetowanie wartości zmiennych
    n1 = 1;
    n2 = 1;

    printf ("Po resecie n1 = %d a n2 = %d\n", n1, n2);

    return 0;
}

/* 
wynik dzialania programu:
na poczatku n1=1, a n2=1
Po n2 = n1++, n1 = 2, a n2 = 1
Po n2 = n1--, n1 = 1, a n2 = 2
Po resecie n1 = 1 a n2 = 1  
*/