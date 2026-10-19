/* licznik.c - listing 7.5 */

#include <stdio.h>

void odlicz (int poczatek, int koniec); /* Prototyp funkcji. */

int main (void) {

  // Wywo³anie funkcji odlicz().
  odlicz (50, 40);
	
  getchar();
	
  return 0;

}

/* Funkcja odlicza od pocz¹tku do koñca, u¿ywaj¹c rekurencji. */
void odlicz (int poczatek, int koniec) {

  printf ("Przed: %d\n", poczatek); // Wyœwietl wartoœæ na pocz¹tku.
	
  --poczatek; // Dekrementacja.
	
  // Jeœli nie osi¹gniêto koñca, wywo³aj funkcjê ponownie.
  if (poczatek > koniec) {
    odlicz (poczatek, koniec);
  }
	
  printf ("Po: %d\n", poczatek); // Wyœwietl wartoœæ po rekurencji, opisywany efekt.

}
