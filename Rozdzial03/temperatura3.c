/* temperatura3.c - Listing 3.5 - modyfikacja listingu 3.3 (temperatura2.c) */

#include <stdio.h>

int main(void) {

  float temp_f, temp_c; /* Temperatura Fahrenheita i Celsjusza. */

  /* Dokonanie konwersji. */
  temp_c = 32.0;
  temp_f = temp_c * 9.0/5.0 + 32; /* Lub (temp_c * (9.0/5.0)) + 32 */

  /* Wyœwietlenie wyniku. */
  printf("%d stopnie Celsjusza to %d stopni Fahrenheita.\n", (int)temp_c, (int)temp_f);

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
