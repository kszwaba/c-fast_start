/* funkcja.c - Listing 10.5 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *pobierz_imie(void); /* Prototyp funkcji. */

int main (void) {

  /* Zadeklaru zmienn¹ wskaŸnikow¹ typu char,
   * aby przechowywa³a adres bazowy tablicy
   * znaków, na przyk³ad tekstu. */
  char *imie = NULL;

  /* Wywo³aj funkcjê i zapamiêtaj zwrócony przez ni¹
   * adres w zmiennej wskaŸnikowej. */
  imie = pobierz_imie();

  /* SprawdŸ, czy pobranie siê uda³o. */
  assert(imie != NULL);
  
  /* Wyœwietl imiê. */
  printf("Wpisane imiê to: %s.\n", imie);

  /* Zwróæ blok do puli */
  free(imie);
  imie = NULL;

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();
  getchar();

  return 0;

} /* Koniec funkcji main(). */


/* Funkcja prosi o podanie imienia i zwraca
 * wskaŸnik na tablicê znaków z imieniem. */
char *pobierz_imie(void) {

  /* Alokuj blok pamiêci o rozmiarze 100 bajtów. */
  char *wejscie = malloc(100);
  
  /* SprawdŸ, czy alokacja siê powiod³a. */
  if (wejscie == NULL) {
    printf("Nieudana alokacja pamiêci!\n");
    return NULL;
  }
  
  /* Poproœ o wpisanie imienia. */
  printf("Wpisz imiê: ");

  /* Zapamiêtaj wejœcie w bloku. */
  scanf("%99s", wejscie);
  
  /* Zwróæ adres bloku pamiêci. */
  return wejscie;

} /* Koniec funkcji pobierz_imie(). */
