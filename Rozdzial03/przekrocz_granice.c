/* przekrocz_granice.c - Listing 3.4 */

#include <stdio.h>
#include <limits.h> // Limity zmiennych ca³kowitych.
#include <float.h> // Limity typów zmiennoprzecinkowych.

int main(void) {

  short int short_maks = SHRT_MAX; // Najwiêksza wartoœæ dla typu short int.
  int int_mini = INT_MIN; // Najmniejsza wartoœæ dla typu int.
  double double_maks = DBL_MAX; // Najwiêksza wartoœæ dla typu double.

  /* Przepe³niamy. */
  short_maks++; // Dodanie jeden do short_maks.
  int_mini *= 2; // Podwojenie ujemnej wartoœæ, aby sta³a siê jeszcze mniejsza.
  double_maks *= 10; // Niech wartoœæ typu double uroœnie.

  /* Wyœwietlenie wyników. */
  printf("Maksymalna wartoœæ short int to %d. Po przepe³nieniu ma wartoœæ %d.\n", SHRT_MAX, short_maks);
  printf("Minimalna wartoœæ int to %d. Po niedomiarze ma wartoœæ %d.\n", INT_MIN, int_mini);
  printf("Maksymalna wartoœæ double to %f. Po przepe³nieniu ma wartoœæ %f.\n", DBL_MAX, double_maks);

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
