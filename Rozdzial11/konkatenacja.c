/* konkatenacja.c - Listing 11.3 */

#include <stdio.h>
#include <string.h> /* Dla strcat() i strncat(). */

#define ROZMIAR 50

int main (void) {
	
  /* Deklaracja dwóch tablic znaków. */
  char imie[ROZMIAR];
  char nazwisko[ROZMIAR];
	
  /* Poproœ o wpisanie imienia i pobierz dane z wejœcia. */
  printf("Wpisz imiê: ");
  scanf("%48s", imie);
	
  /* Poproœ o wpisanie nazwiska i pobierz dane z wejœcia. */
  printf("Wpisz nazwisko: ");
  scanf("%49s", nazwisko);
	
  /* Dodaj spacjê. */
  strcat(imie, " ");
	
  /* Dodaj nazwisko. */
  strncat(imie, nazwisko, (ROZMIAR - 1) - strlen(imie));
	
  /* Wyœwietl wynik. */
  printf("Nazywasz siê %s.\n", imie);
	
  getchar();
  getchar();
  return 0;
}
