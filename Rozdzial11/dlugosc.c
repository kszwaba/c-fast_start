/* dlugosc.c - Listing 11.2 - modyfikacja roznica.c (listing 11.1) */

#include <stdio.h>
#include <string.h>

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

  /* Zadeklaruj trzy zmienne typu ca³kowitego. */
  int i; /* Licznik pêtli. */
  int licz_rozdzialy = 0, licz_wsk = 0; /* Liczniki znaków. */

  /* Wyœwietl iloœæ pamiêci zajmowanej przez ka¿d¹ ze zmiennych. */
  printf ("Tablica znaków zajmuje w pamiêci %lu bajtów.\n", sizeof(rozdzialy));
  printf ("Tablica znaczników zajmuje w pamiêci %lu bajtów.\n", sizeof(rozdzialy_wsk));;

  /* Okreœl ³¹czn¹ d³ugoœæ tekstu. */
  for (i = 0; i < 5; ++i) {
    licz_rozdzialy += strlen(rozdzialy[i]);
  }
	
  /* Wyœwietl ³¹czn¹ liczbê znaków. */
  printf ("Tablica rozdzialy zawiera %d znaków.\n", licz_rozdzialy);

  /* Oblicz, ile miejsca w pamiêci zajmuje tablica wskaŸników ³¹cznie ze znakami. */
  licz_wsk = sizeof(rozdzialy_wsk) + licz_rozdzialy + 5; /* Rozmiar wskaŸników plus liczba znaków plus 5 (dla \0). */

  /* Wyœwietl wynik. */
  printf ("Tablica rozdzialy_wsk tak naprawdê zajmuje w pamiêci %d bajtów.\n", licz_wsk);

  getchar();
  return 0;
}
