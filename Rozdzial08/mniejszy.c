/* mniejszy.c - Listing 8.4 */

#include <stdio.h> /* Dyrektywa do³¹czania pliku. */

#define MIN(X,Y) ( ((X) < (Y)) ? (X) : (Y) ) /* Zwraca mniejsz¹ z dwóch wartoœci. */

int main (void) {

  float l1, l2; /* Dwie porównywane liczby. */

  /* Przypisz wartoœci zmiennym. */
  l1 = 20.0;
  l2 = 103.9;

  /* Wyœwietl mniejsz¹ z liczb. */
  printf ("Mniejsz¹ z liczb %.1f i %.1f jest %.1f.\n", l1, l2, MIN(l1,l2));

  getchar(); /* Zaczekaj na naciœniecie klawisza Enter lub Return. */

  return 0;

}
