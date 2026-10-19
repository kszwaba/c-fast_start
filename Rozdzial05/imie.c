/* Listing 5.2 - imie.c */

#include <stdio.h>

int main (void) {

        char imie[10]; // Ci¹g znaków.

  // Pobierz imiê a nastêpnie wykorzystaj je w kolejnym komunikacie.
  printf("Wpisz swoje imiê: ");
  scanf ("%10s", imie);
  printf ("Masz na imiê %s.\n", imie);

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();
  getchar();

  return 0;
}
