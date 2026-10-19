/* wspak.c - Listing 6.6 */

#include <stdio.h>
#include <ctype.h> // Wymagane do u¿ycia funkcji isalpha().

int main (void) {
	
  char wejscie[11]; // Wpisane znaki.
  int i; // Zmienna indeksowa.
  char smieci; // Pozbycie siê dodatkowego wejœcia.
	
  // Poproszenie u¿ytkownika o wyraz.
  printf ("Wpisz wyraz o d³ugoœci maksymalnie 10 znaków: ");
	
  // Odczytaj wejœcie.
  scanf ("%10s", wejscie);
	
  // Wyœwietl wyraz napisany wspak.
  printf ("Wyraz '%s' to '", wejscie);
	
  // PrzejdŸ przez wejœcie w odwrotnej kolejnoœci.
  for (i = 9; i >= 0; i--) {
		
    // Wyœwietlaj tylko litery.
    if (isalpha(wejscie[i])) {
      printf ("%c", wejscie[i]);
    }

  } // Koniec pêtli.
	
  printf ("', jeœli napisaæ go od ty³u.\n");
	
  // Pozbycie siê zbêdnych znaków i zaczekanie na ponowne naciœniêcie klawisza Return lub Enter.
  do {
    smieci = getchar();
  } while (smieci != '\n');
	
  /* Czekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();
	
  return 0;
	
}
