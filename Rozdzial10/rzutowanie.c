/* rzutowanie.c - Listing 10.2 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  /* Deklaracja zmiennej wskaŸnikowej typu void. */
  void *x = NULL;

  /* Zarz¹daj bloku, który pomieœci
   * jedn¹ liczbê ca³kowit¹. */
  x = malloc(sizeof(int));

  /* Pomijamy tutaj sprawdzanie wartoœci NULL
   * W rzeczywistych programach zawsze nale¿y
   * sprawdzaæ, czy funkcja malloc() zwróci³a NULL. */

  /* Wyœwietlenie pocz¹tkowego adresu uzyskanego bloku. */
  printf("Adres zaalokowanego bloku: %p.\n", x);

  /* Zapamiêtaj w pliku liczbê ca³kowit¹. */
  *(int *)x = 1234;

  /* Wyœwietl wartoœæ. */
  printf("Wartoœæ znajduj¹ca siê w bloku: %d.\n", *(int *)x);

  /* Zwolnienie pamiêci zajmowanej przez blok. */
  free(x);
  x = NULL;

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();

  return 0;

}
