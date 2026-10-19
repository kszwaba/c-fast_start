/* srednia2.c - Listing 4.3 - przeróbka listingu 4.2 (srednia.c) */

#include <stdio.h>

int main(void) {

  float srednia = 3.63; // Œrednia ocen studenta.

  // Raport na temat œredniej.
  if (srednia >= 4.0) {
    printf("Otrzymujesz stypendium za wyniki w nauce, poniewa¿ masz œredni¹ %0.2f!\n", srednia);
  } else if (srednia >= 3.9) {
    printf("Otrzymujesz ksi¹¿kê, poniewa¿ masz œredni¹ %0.2f!\n", srednia);
  } else if (srednia >= 3.75) {
    printf("Otrzymujesz pochwa³ê, poniewa¿ masz œredni¹ %0.2f!\n", srednia);
  } else {
    printf("Mo¿e w przysz³ym roku bêdzie lepiej, œrednia to nie wszystko.\n");
  }

  getchar(); /* Zatrzymaj a¿ uzytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
