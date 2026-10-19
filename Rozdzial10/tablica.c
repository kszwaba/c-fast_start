/* tablica.c - Listing 10.3 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  /* Zadeklaruj zmienn¹ wskaŸnikow¹ typu int. */
  int *x = NULL;
	
  /* Zadeklaruj dwie zmienne typu int. */
  int i, ile;

  /* Poproœ o podanie liczby elementów. Zapamiêtaj
   * wpian¹ wartoœæ w zmiennej ile. */
  printf("Podaj liczbê elementów: ");
  scanf("%d", &ile);

  /* Za¿¹daj alokacji na tyle du¿ego bloku pamiêci
   * aby pomieœciæ w niej tyle elementów, ile
   * chcia³ u¿ytkownik. */
  x = malloc(ile * sizeof(int));

  /* Pomijamy tutaj sprawdzanie wartoœci NULL
   * W rzeczywistych programach zawsze nale¿y
   * sprawdzaæ, czy funkcja malloc() zwróci³a NULL. */

  /* Zapamiêtaj losowe liczby ca³kowite w
   * elementach tablicy. */
  for (i = 0; i < ile; i++) {
    x[i] = rand();
  }

  /* Wyœwietl wartoœci elementów tablicy. */
  for (i = 0; i < ile; i++) {
    printf("Wartoœæ elementu %d wynosi %d.\n", i, x[i]);
  }

  /* Zwróæ blok pamiêci do puli. */
  free(x);
  x = NULL;

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();
  getchar();

  return 0;

}
