/* wymiana2.c - Listing 6.5 - modyfikacja listingu 6.4 (wymiana.c)*/

#include <stdio.h>

int main (void) {
	
  const int ELEM = 10; // Sta³a wartoœæ okreœlaj¹c¹ liczbê elementów tablicy.
  float kwoty[ELEM]; // Przechowuje ró¿ne wartoœci waluty.
  unsigned int i; // Zmienna u¿ywana w pêtli.

  // Wyœwietl nag³ówek.
  printf ("Konwersja z dolarów na z³otówki:\n\n");
  printf ("%10s %10s\n", "Dolary", "Z³otówki");

  // Przejœcie przez tablicê.
  for (i = 0; i < ELEM; i++) {
		
    // Inkrementacja kwot o 5 dolarów.
    kwoty[i] = (i + 1) * 5.00;
		
    // Wyœwietl kwotê w dolarach i w z³otówkach (1 dolar = 3,1217 z³otych).
    printf ("%10.2f %10.2f\n", kwoty[i], (kwoty[i] * 3.1217));
		
  } // Koniec pêtli.
	
  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();
	
  return 0;
	
}
