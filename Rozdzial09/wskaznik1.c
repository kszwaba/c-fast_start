/* wskaznik1.c - Listing 9.1 */

#include <stdio.h>

int main (void) {

  /* Deklaracja piêciu zmiennych o ró¿nych typach. */
  int  a = -40;
  int  b = 7853;
  char c = 74;
  char d = 19;
  int  e = 449378;

  /* Wyœwietlenie adresów wszystkich zmiennych.
   * W ten sposób poznamy ich u³o¿enie w pamiêci komputera. */
  printf("Adres a: %u\n", &a);
  printf("Adres b: %u\n", &b);
  printf("Adres c: %u\n", &c);
  printf("Adres d: %u\n", &d);
  printf("Adres e: %u\n", &e);

  /* Zaczekaj na naciœniêcie klawisza Return lub Enter. */
  getchar();

  return 0;

}
