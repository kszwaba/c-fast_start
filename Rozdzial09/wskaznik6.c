/* wskaznik6.c - Listing 9.6 */

#include <stdio.h>

void zamiana(int *pierwsza, int *druga); /* Prototyp funkcji. */

int main(void) {
			
  /* Zadeklaruj i zainicjalizuj dwie zmienne ca³kowite. */
  int a = 5, b = 10;
	
  /* Wyœwietl pocz¹tkowe wartoœci zmiennych. */
  printf("Przed dokonaniem zamiany: a = %d, b = %d.\n", a, b);
	
  /* Dokonaj zamiany. */
  zamiana(&a, &b);
	
  /* Ponownie wyœwietl wartoœci. */
  printf("Po zamianie: a = %d, b = %d.\n", a, b);

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();

  return 0;

} /* Koniec funkcji main(). */

/* Zdefiniuj funkcjê zamiana(). Jako argumenty przyjmij wskaŸniki zamiast wartoœci. */
void zamiana(int *pierwsza, int *druga) {

  /* U¿ywaj¹c trzeciej zmiennej, zamieñ wartoœci
   * dwóch zmiennych, których adresy zosta³y
   * przekazane jako parametry.
   * U¿ywamy operatora dereferencji *, aby
   * pobraæ wartoœci zmiennych. */
  int tymcz = *pierwsza;
  *pierwsza = *druga;
  *druga = tymcz;
	
} /* Koniec funkcji zamiana(). */

