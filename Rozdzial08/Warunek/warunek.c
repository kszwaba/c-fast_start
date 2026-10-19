/* warunek.c - Listing 8.8 */

#include <stdio.h> /* Dyrektywa do³¹czenia pliku. */

#include "./moja_mat2.h"

int main (void) {

  float l1, l2; /* Wartoœci do porównania. */

  /* Przypisanie wartoœci zmiennym. */
  l1 = .9;
  l2 = 6554.1;

  /* Wyœwietl mniejsz¹ z liczb. */
  printf ("Mniejsz¹ liczb¹ z %.1f i %.1f jest %.1f.\n", l1, l2, MIN(l1,l2));

  /* Wyœwietl wiêksz¹ z liczb. */
  printf ("Wiêksz¹ liczb¹ z %.1f i %.1f jest %.1f.\n", l1, l2, MAKS(l1,l2));

  /* Wyœwietl œredni¹ dwóch liczb. */
  printf ("Œrednia liczb %.1f i %.1f wynosi %.1f.\n", l1, l2, SR(l1,l2));

  getchar(); /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */

  return 0;

}
