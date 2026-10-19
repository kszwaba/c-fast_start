/* jardy.c - listing 8.2 */

#include <stdio.h> /* Dyrektywa do³¹czenia pliku. */

#define LICZBA_ELEM 10 /* Liczba elementów tablicy. */

int main (void) {
	
  unsigned int jardy[LICZBA_ELEM]; /* Tablica przechowuj¹ca kolejne wartoœci jardów. */
  int i; /* Zmienna indeksowa. */

  /* Wype³nij tablicê wartoœciami zwiêkszanymi za ka¿dym razem o 5. */
  for (i = 0; i < LICZBA_ELEM; i++) {
    jardy[i] = (i + 1) * 5;
  }

  /* Wyœwietl nag³ówek. */
  printf ("%10s %10s\n", "Jardy", "Metry");

  /* Skonwertuj na metry i wyœwietl. */
  for (i = 0; i < LICZBA_ELEM; i++) {
    printf ("%10d %10.2f\n", jardy[i], jardy[i] * 0.9144);
  }

  getchar(); /* Zaczekaj na naciœniecie klawisza Enter lub Return. */

  return 0;

}
