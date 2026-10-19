/* wymiana3.c - Listing 6.7 - modyfikacja listingów 6.4 i 6.5 (wymiana.c and wymiana2.c) */

#include <stdio.h>

int main (void) {
	
  const int ELEM = 10; // Sta³a wartoœæ okreœlaj¹c¹ liczbê elementów tablicy.
  double kwoty[2][ELEM]; // Przechowuje ró¿ne wartoœci waluty.
	
  // Tytu³y nag³ówków przechowywane jako tablica dwuwymiarowa.
  char tytuly[2][9] = {
    {"Z³otówki"},
    {"Euro"}
  };
	
  double przeliczniki[] = {3.1217, 0.783859}; // Odpowiednio z³otówki i euro.
	
  unsigned int i, j; // Zmienne pêtli.
	
  // Wyœwietlenie nag³ówkia.
  printf ("Dolary amerykañskie zamienione na z³otówki i euro:\n\n");
	
  for (i = 0; i < 2; i++) {
    printf ("%10s %10s\n", "Dolary", tytuly[i]);

    // Przejœcie przez pêtlê.
    for (j = 0; j < ELEM; j++) {
			
      // Inkrementacja kwot o 5 dolarów.
      kwoty[i][j] = (j + 1) * 5.00;
			
      // Wyœwietl kwotê oryginaln¹ i po konwersji.
      printf ("%10.2f %10.2f\n", kwoty[i][j], (kwoty[i][j] * przeliczniki[i]));
			
    } // Koniec pêtli wewnêtrznej.
		
    printf ("\n\n");
		
  } // Koniec pêtli zewnêtrznej.
	
  /* Zaczekaj na naciœniecie klawisza Enter lub Return. */
  getchar();
	
  return 0;
	
}
