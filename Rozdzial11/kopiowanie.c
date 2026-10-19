/* kopiowanie.c - Listing 11.5 */

#include <stdio.h>
#include <string.h> /* Dla strncpy(). */

void wyczysc_wejscie (void); /* Prototyp funkcji. */

#define ILE_TEKSTOW 10
#define DL_TEKSTU 10

int main (void) {
	
  /* Zadeklaruj wielowymiarow¥ tablicê znaków. */
  char wyrazy[ILE_TEKSTOW][DL_TEKSTU];
	
  char wejscie[DL_TEKSTU]; /* Dane od u¿ytkownika. */
	
  int i; /* Zmienna pêtli. */
  int ile = 0; /* Zlicza wpisane wyrazy. */
	
  /* Odczytaj maksymalnie ILE_TEKSTOW wyrazów. */
  for (i = 0; i < ILE_TEKSTOW; ++i) {
		
    /* Poproœ o wpisanie wyrazu i pobierz go z wejœcia. */
    printf("Wpisz wyraz (lub 0, by wyjœæ): ");
    scanf("%9s", wejscie);
    wyczysc_wejscie();
		
    /* SprawdŸ, czy wpisano 0. */
    if (wejscie[0] == '0') break;
		
    /* Skopiuj wejœcie do tablicy. */
    strncpy(wyrazy[i], wejscie, (DL_TEKSTU - 1));
		
    /* Zwiêksz licznik wyrazów. */
    ++ile;
		
  } /* Koniec pêtli. */
	
  printf("Wpisanio %d wyrazów.\n", ile);
	
  getchar();
  return 0;
	
}

/* Funkcja czyœci wejœcie ze zbêdnych znaków. */
void wyczysc_wejscie (void) {
	
  char smieci; // W celu pozbycia siê nadmiarowych znaków.
	
  // PrzejdŸ przez wejœcie i ignoruj nowe znaki.
  do {
    smieci = getchar();
  } while (smieci != '\n' );

} /* Koniec funkcji wyczysc_wejscie(). */
