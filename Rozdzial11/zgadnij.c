/* zgadnij.c - Listing 11.4 */

#include <stdio.h>
#include <string.h> /* Dla strcasecmp(). */

void wyczysc_wejscie (void); /* Prototyp funkcji. */

int main (void) {
	
  /* Dwie tablice znakÛw. */
  char zgadywanie[10];
  const char odpowiedz[] = "kot"; /* Zgadywany wyraz. */
	
  /* Wyúwietl pytanie i pobierz odpowiedü. */
  printf("Zgadnij, o jakim trzyliterowym wyrazie w≥aúnie myúlÍ: ");
  scanf("%9s", zgadywanie);
  wyczysc_wejscie();
	
  /* Sprawdü rÛwnoúÊ. Jeúli rÛøne, zapytaj jeszcze raz. */
  while (strcasecmp(odpowiedz, zgadywanie)) {
    printf("èle! SprÛbuj jeszcze raz: ");
    scanf("%9s", zgadywanie);
    wyczysc_wejscie();
  }

  /* Tutaj dostaniesz siÍ tylko po udzieleniu poprawnej odpowiedzi. */
  printf("Odpowiedü poprawna. Brawo!");
	
  getchar();
  return 0;
}

/* Funkcja czyúci wejúcie ze zbÍdnych znakÛw. */
void wyczysc_wejscie (void) {
	
  char smieci; // W celu pozbycia siÍ nadmiarowych znakÛw.
	
  // Przejdü przez wejúcie i ignoruj nowe znaki.
  do {
    smieci = getchar();
  } while (smieci != '\n' );

} /* Koniec funkcji wyczysc_wejscie(). */
