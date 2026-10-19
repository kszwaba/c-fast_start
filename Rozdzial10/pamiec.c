/* pamiec.c - Listing 10.1 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  /* Deklaracja zmiennej wskaŸnikowej typu void. */
  void *x;

  /* ¯¹danie alokacji bloku o rozmiarze 1000 bajtów. */
  x = malloc(1000);

  /* Wyœwietlenie pocz¹tkowego adresu uzyskanego bloku. */
  printf("Adres zaalokowanego bloku: %p.\n", x);

  /* Zwolnienie pamiêci zajmowanej przez blok. */
  free(x);
  x = NULL;

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();

  return 0;

}
