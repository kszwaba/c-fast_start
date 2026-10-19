/* nowy_wiersz.c - Listing 8.3 */

#include <stdio.h> /* Dyrektywa do³¹czenia pliku. */

#define NW printf("\n") /* Wyœwietla znak nowego wiersza. */

int main (void) {

  /* Wyœwietla tekst w kolejnych wierszach. */

  printf ("To jest pewien tekst.");

  NW;

  printf ("Ten tekstu pojawi siê jeden wiersz ni¿ej.");

  NW;
  NW;

  printf ("Ten wiersz pojawi siê dwa wiersze ni¿ej.");

  getchar(); /* Zaczekaj na naciœniecie klawisza Enter lub Return. */

  return 0;

}
