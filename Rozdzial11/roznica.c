/* roznica.c - Listing 11.1 */

#include <stdio.h>

/* Ustaw nazwy poszczególnych rozdzia³ów jako sta³e. */
#define ROZDZIAL0 "Wprowadzenie"
#define ROZDZIAL1 "Zaczynamy przygodê z jêzykiem C"
#define ROZDZIAL2 "Typy danych"
#define ROZDZIAL3 "Liczby"
#define ROZDZIAL4 "Struktury steruj¹ce"

int main (void) {
	
  /* Utwórz wielowymiarow¹ tablicê znaków. */
  char rozdzialy[5][32] = {{ROZDZIAL0}, {ROZDZIAL1}, {ROZDZIAL2}, {ROZDZIAL3}, {ROZDZIAL4}};
	
  /* Utwórz tablicê wskaŸników. */
  char *rozdzialy_wsk[5] = {ROZDZIAL0, ROZDZIAL1, ROZDZIAL2, ROZDZIAL3, ROZDZIAL4};

  /* Wyœwietl iloœæ pamiêci zajmowanej przez ka¿d¹ ze zmiennych. */
  printf ("Tablica znaków zajmuje w pamiêci %lu bajtów.\n", sizeof(rozdzialy));
  printf ("Tablica znaczników zajmuje w pamiêci %lu bajtów.\n", sizeof(rozdzialy_wsk));
	
  getchar();
  return 0;
}
