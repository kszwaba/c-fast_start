/* zmiana_rozm.c - Listing 10.4 */

#include <stdio.h>
#include <stdlib.h>

/* Prototyp funkcji u¿ywanej do sortowania wartoœci. */
int sortowanie(const void *x, const void *y);

int main (void) {

  /* Deklaruje zmienn¹ wskaŸnikow¹ typu int. */
  int *liczby;
  
  /* Deklaruje zmienn¹ przechowuj¹c¹ liczbê wpisan¹ przez u¿ytkiownika
   * i odczytan¹ funkcj¹ scanf(). Deklaruje drug¹ zmienn¹ do
   * przechowywania wyniku zwracanego przez funkcjê scanf(). */
  int wejscie, wynik;
  
  /* Deklaruje zmienne typu int zawieraj¹ce aktualny rozmiar
   * dynamicznej tablicy, nastêpny wolny indeks w tablicy i
   * licznik dla pêtli for. */
  int rozmiar = 4, i, indeks = 0;

  /* Zaalokuj tablicê o pocz¹tkowym rozmiarze. */
  liczby = malloc(rozmiar * sizeof(int));
  
  /* Ponownie opuszczamy sprawdzanie wartoœci NULL. */

  /* Pocz¹tek pêtli nieskoñczonej, z której wyjœcie
   * nastêpuje dopiero po wpisaniu liczby 0 lub litery. */
  while (1) {
    
    /* Poproœ u¿ytkownika o liczbê i odczytaj j¹ funkcj¹ scanf(). */
    printf("Wpisz niezerow¹ liczbê ca³kowit¹ (lub 0, aby wyjœæ): ");
    wynik = scanf("%d", &wejscie);

    /* Jeœli wpisano 0 lub podano coœ innego od liczby,
     * opuœæ pêtlê za pomoc¹ instrukcji break. */
    if (wynik < 1 || wejscie == 0) break;

    /* Przed zapamiêtaniem wartoœci w tablicy, sprawdŸ, czy jest miejsce.
     * Jeœli go nie ma, u¿yj funkcji realloc(), do powiêkszenia tablicy. */
    if (indeks == rozmiar) {
      rozmiar *= 1.5;
      liczby = realloc(liczby, rozmiar * sizeof(int));
      printf("Zmiana rozmiaru bloku. Aktualny rozmiar to %d bajtów.\n", rozmiar * sizeof(int));
    }

    /* Zapamiêtaj now¹ wartoœæ w kolejnym wolnym elemencie. */
    liczby[indeks] = wejscie;
    
    /* Zwiêksz indeks, aby wskazywa³ na kolejne wolne miejsce. */
    indeks++;

  } /* Koniec g³ównej pêtli. */


  /* Wyszliœmy z nieskoñczonej pêtli. U¿yjmy funkcji qsort(), aby
   * posortowaæ wartoœci znajduj¹ce siê w tablicy w porz¹dku rosn¹cym. */
  qsort(liczby, indeks, sizeof(int), sortowanie);


  /* Wyœwietl zawartoœæ tablicy, u¿ywaj¹c pêtli. */
  for (i = 0; i < indeks; i++) {
    printf("Element: %d --> Wartoœæ: %d.\n", i, liczby[i]);
  }

  /* Zwróæ blok do puli. */
  free(liczby);
  liczby = NULL;

  /* Zaczekaj na naciœniecie klawisza Enter lub Return. */
  getchar();
  getchar();

  return 0;

} /* Koniec funkcji main(). */


/* Jest to funkcja porównuj¹ca u¿ywana przez
 * funkcjê qsort() do sortowania wartoœci.
 * Szczegó³ów szukaj w dokumentacji standardowej
 * biblioteki jêzyka C. */
int sortowanie(const void *x, const void *y) {

  const int *a = x, *b = y;

  if (*a < *b) {
    return -1;
  } else if (*a > *b) {
    return 1;
  }

  return 0;

} /* Koniec funkcji sortowanie(). */
