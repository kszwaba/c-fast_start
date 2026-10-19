/* srednia.c - Listing 4.2 */

#include <stdio.h>

int main(void) {

  float srednia = 3.8; // Œrednia ocen studenta.

  // Sprawdzenie, czy przys³uguje stypendium (œrednia co najmniej 4.0).
  if (srednia >= 4.0) {
    printf("Otrzymujesz stypendium za wyniki w nauce, poniewa¿ masz œredni¹ %0.2f!\n", srednia);
  }

  // Sprawdzenie, czy przys³uguje ksi¹¿ka za wyniki.
  if ((srednia >= 3.9) && (srednia<4.0)) {
    printf("Otrzymujesz ksi¹¿kê, poniewa¿ masz œredni¹ %0.2f!\n", srednia);
  } 

  // Sprawdzenie, czy przys³uguje pochwa³a za wyniki.
  if ((srednia >= 3.75) && (srednia<3.9)) {
    printf("Otrzymujesz pochwa³ê, poniewa¿ masz œredni¹ %0.2f!\n", srednia);
  }

  getchar(); /* Zatrzymaj a¿ uzytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
