/* funkcja_wymiana.c - Listing 7.2 */

#include <stdio.h>

void wyswietl_tabele_wymiany(float kurs, char tytul[]); /* Prototyp funkcji. */

int main (void) {
	
  // Poka¿ z³otówki.
  wyswietl_tabele_wymiany (3.1217, "Z³otówki");

  // Poka¿ euro.
  wyswietl_tabele_wymiany (0.783859, "Euro");
	
  // Zaczekaj na naciœniêcie klawisza Enter lub Return.
  getchar();
	
  return 0;
	
} /* Koniec funkcji main(). */

/* Funkcja wyœwietla tabelkê z wymian¹ walut. */
void wyswietl_tabele_wymiany(float kurs, char tytul[]) {

  float i; // Zmienna pêtli.
	
  // Wyœwietl nag³ówek.
  printf ("%10s %10s\n", "Dolary", tytul);
	
  // Oblicz i wyœwietl kolejne wiersze.
  for (i = 10.00; i <= 100.00; i += 10.00) {
		
    // Wyœwietl oryginaln¹ kwotê oraz kwotê po konwersji.
    printf ("%10.2f %10.2f\n", i, i * kurs);
		
  }
	
  printf ("\n\n");
	
} /* Koniec funkcji wyswietl_tabele_wymiany(). */
