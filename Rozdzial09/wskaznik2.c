/* wskaznik2.c - Listing 9.2 */

#include <stdio.h>

int main (void) {

  /* Deklaracja zmiennych. */
  int  a = 456;
  char b = 'J';

  /* Utworzenie dwóch wskaŸników o odpowiednich typach. */
  int  *x;
  char *y;

  /* Zapamiêtanie adresów we wskaŸnikach. */
  x = &a;
  y = &b;

  /* Wyœwietlenie wyników dwoma ró¿nymi metodami. */
  printf("Adres a: %p\n", &a);
  printf("Adres a: %p\n", x);
  printf("Adres b: %p\n", &b);
  printf("Adres b: %p\n", y);

  /* Zaczekaj na naciœniecie klawisza Return lub Enter. */
  getchar();

  return 0;

}
