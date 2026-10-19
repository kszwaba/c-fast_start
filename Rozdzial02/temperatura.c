/* temperatura.c - Listing 2.6 */

#include <stdio.h>

int main(void) {

  int fahrenheit = 212; /* Temeratura do konwersji. */
  const int ODEJMOWANA_WARTOSC = 32; /* Wartoœæ do odjêcia. */
  const float WSPOLCZYNNIK = 5.0/9.0; /* 5/9 skonwertowane do liczby u³amkowej. */

  /* Obliczenie i wyœwietlenie wartoœci. */
  printf("%d stopni Fahrenheita to %0.1f stopni Celsjusza.\n",fahrenheit,(fahrenheit - ODEJMOWANA_WARTOSC) * WSPOLCZYNNIK);

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
