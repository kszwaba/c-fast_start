#include <stdio.h>

int main(void) {

    int fahrenheit = 212;
    const int ODEJMOWANA_WARTOSC = 32;
    const float WSPOLCZYNNIK = 5.0/9.0;

    printf ("%d stopni Fahrenheita to %0.1f stopni Celcjusza.\n",\
    fahrenheit, (fahrenheit - ODEJMOWANA_WARTOSC) * WSPOLCZYNNIK);

    getchar();

    return 0;
}