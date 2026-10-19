/* if.c - Listing 4.1 */

#include <stdio.h>

int main(void) {

  int test = 0; // Zmienna bêd¹ca warunkiem.

  // Wyœwietlenie tekstu wprowadzenia
  printf("Testowane zmiennej test.\n");

  // Sprawdzenie wartoœci zmiennej i wyœwietlenie tekstu (jeœli test = 0, tekst nie wyœwietli siê
  if (test) {
    printf("*** Zmienna test zawiera wartoœæ %d.\n",test);
  }

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
