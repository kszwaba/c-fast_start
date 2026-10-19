/* ojeden.c - Listing 3.2 */

#include <stdio.h>

int main(void) {

  int n1, n2; /* Dwie liczby ca³kowite. */

  /* Arytmetyka przyrostkowa */
  n1 = 1;
  n2 = 1;
  printf("Na pocz¹tku n1 = %d a n2 = %d.\n", n1, n2);
  n2 = n1++;
  printf("Po n2 = n1++, n1 = %d a n2 = %d.\n", n1, n2);
  n2 = n1--;
  printf("Po n2 = n1--, n1 = %d a n2 = %d.\n", n1, n2);

  /* Reset */
  n1 = 1;
  n2 = 1;
  printf("Po resecie n1 = %d a n2 = %d.\n", n1, n2);

  /* Arytmetyka przedrostkowa */
  n2 = ++n1;
  printf("Po n2 = ++n1, n1 = %d a n2 = %d.\n", n1, n2);
  n2 = --n1;
  printf("Po n2 = --n1, n1 = %d a n2 = %d.\n", n1, n2);

  getchar(); /* Zatrzymaj program do naciœniêcia klawisza Return lub Enter. */

  return 0;

}
