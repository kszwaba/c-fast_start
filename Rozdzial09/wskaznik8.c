/* wskaznik8.c - Listing 9.8 */

#include <stdio.h>

/* Funkcja main przyjmuje dwa argumenty,
 * liczbe ca³kowit¹ i tablicê wskaŸników do ci¹gów znaków. */
int main(int argc, char *argv[]) {
			
  /* Zadeklaruj zmienn¹
   * u¿ywan¹ w pêtlach. */
  int i;

  /* Wyœwietl liczbê wprowadzonych argumentów. */
  printf("Liczba wprowadzonych argumentów: %d\n", argc);

  /* Wyœwietl adres bazowy tablicy argv. */
  printf("Adres bazowy argv: %p\n\n", argv);

  /* Wyœwietl wartoœci wszystkich elementów
   * tablicy argv. Ka¿dy element jest wskaŸnikiem
   * na ci¹g znaków, wiêc po prostu stosujemy
   * znacznik %s. */
  printf("Adres --> Wartoœæ\n");
  for (i = 0; i < argc; i++) {
    printf("%p --> %s\n", argv[i], argv[i]);
  }

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();

  return 0;

}


