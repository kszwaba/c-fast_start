/* stopy_cale.c - Listing 3.1 */

#include <stdio.h>

int main(void) {

  unsigned short int cale = 3435; /* Pewna losowa wartoœæ. */
  unsigned short int stopy_int; /* Ca³kowita liczba stóp. */
  unsigned short int cale_reszta; /* Reszta, wspó³pracuje z stopy_int. */
  float stopy_float; /* Zmiennopozycyjna wersja stopy w celach porównwczych. */

  /* Dokonanie obliczeñ. */
  stopy_int = cale/12;
  cale_reszta = cale % 12;
  stopy_float = cale/12.0; /* Trzeba u¿yæ 12.0, by dzieliæ zmiennopozycyjnie! */

  /* Wyœwietlenie wyników. */
  printf("%u cali to %u stóp i %u cale.\n", cale, stopy_int, cale_reszta);
  printf("Jako wartoœæ zmiennoprzecinkowa jest to %f stóp.\n", stopy_float);

  getchar(); /* Zatrzymaj program do naciœniêcia klawisza Return lub Enter. */

  return 0;

}
