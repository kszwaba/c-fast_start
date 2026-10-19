/* test.c - Listing 8.1 */

#include <stdio.h> /* Dyrektywa do³¹czenia. */

#define IMIE "Larry" /* Dyrektywa makra. */

int main (void) {
	
  /* Wykorzystaj zdefiniowane makro. */
  printf ("Witaj %s.\n", IMIE);

  getchar(); /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  return 0;
	
}
