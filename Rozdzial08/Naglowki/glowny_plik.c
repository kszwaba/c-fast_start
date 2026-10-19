/* glowny_plik.c - Listing 8.6 */

#include <stdio.h> /* Dyrektywa do³¹czenia pliku. */

#include "naglowki/moja_mat.h" /* Dyrektywa do³¹czenia pliku. */

int main (void) {

  float l1, l2; /* Wartoœci do porównania. */

  /* Przypisanie wartoœci zmiennym. */
  l1 = 497.3;
  l2 = -9.8;

  /* Wyœwietl mniejsz¹ z liczb. */
  printf ("Mniejsz¹ liczb¹ z %.1f i %.1f jest %.1f.\n", l1, l2, MIN(l1,l2));

  /* Wyœwietl wiêksz¹ z liczb. */
  printf ("Wiêksz¹ liczb¹ z %.1f i %.1f jest %.1f.\n", l1, l2, MAKS(l1,l2));

  /* Wyœwietl œredni¹ dwóch liczb. */
  printf ("Œrednia liczb %.1f i %.1f wynosi %.1f.\n", l1, l2, SR(l1,l2));

  getchar(); /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */

  return 0;

}
