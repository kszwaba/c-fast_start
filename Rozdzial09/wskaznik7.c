/* wskaznik7.c - Listing 9.7 */

#include <stdio.h>

#define ELEM 5 /* Liczba elementów tablicy. */

int main(void) {
			
  /* Zadeklaruj i zainicjalizuj tablicê z 5 elementami. */
  char a[] = {3, 23, 14, 7, 12};

  /* Zadeklaruj zmienn¹ wskaŸnikow¹ typu char oraz zmienn¹ typu int. */
  char *b;
  int i;
	
  /* Zapamiêtaj adres tablicy znaków
   * w zmiennej wskaŸnikowej. */
  b = a;

  /* W pêtli for wyœwietl wszystkie wartoœci tablicy,
   * u¿ywaj¹c nawiasów kwadratowych. */
  printf("Nawiasy kwadratowe\n");
  for (i = 0; i < ELEM; i++) {
    printf("%d\n", (int) a[i]);
  }

  /* Ponownie w pêtli for wyœwietl wszystkie wartoœci
   * tablicy. U¿yj arytmetyki wskaŸnikowej, by
   * inkrementowaæ zmienn¹ wskaŸnikow¹ w trakcie
   * dzia³ania pêtli. */
  printf("Arytmetyka wskaŸnikowa\n");
  for (i = 0; i < ELEM; i++) {
    printf("%d\n", (int) *b);
    b++;
  }

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();

  return 0;
}


