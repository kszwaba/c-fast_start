/* temperatura2.c - Listing 3.3 - modyfikacja listingu 2.6 (temperatura.c) */

#include <stdio.h>

int main(void) {

  float temp_f, temp_c; /* Temperatura Fahrenheita i Celsjusza. */

  /* Dokonanie konwersji. */
  temp_c = 32.0;
  temp_f = temp_c * 9.0/5.0 + 32; /* Lub (temp_c * (9.0/5.0)) + 32 */

  /* Wyœwietlenie wyniku. */
  printf("%0.1f stopni Celsjusza to %0.1f stopni Fahrenheita.\n", temp_c, temp_f);

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
