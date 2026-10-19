/* wskaznik3.c - Listing 9.3 - modyfikacja listingu 9.2 (wskaznik2.c) */

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

  /* Wyœwietlenie adresu zmiennych. */
  printf("Adres a: %p\n", &a);
  printf("Adres b: %p\n", &b);
  printf("Adres x: %p\n", &x);
  printf("Adres y: %p\n", &y);

  /* Wyœwietlenie rozmiaru zmiennych. */
  printf("Rozmiar a: %d\n", sizeof(a));
  printf("Rozmiar b: %d\n", sizeof(b));
  printf("Rozmiar x: %d\n", sizeof(x));
  printf("Rozmiar y: %d\n", sizeof(y));

  /* Zaczekaj na naciœniecie klawisza Return lub Enter. */
  getchar();

  return 0;

}


