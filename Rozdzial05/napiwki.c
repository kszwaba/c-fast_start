/* napiwki.c - Listing 5.6 */

#include <stdio.h>

int main(void) {
	
  float i; // Zmienna dla pêtli.

  // Wyœwietl nag³ówki.
  printf ("Kalkulacja napiwków dla ró¿nych wartoœci rachunku:\n\n");
  printf ("%10s %9d%% %9d%%\n", "Rachunek", 15, 20);
	
  // Wykonaj kilka iteracji dla ka¿dej wyœwietlaj¹c wyniki.
  for (i = 10.00; i <= 100.00; i += 5) {

    // Wyœwietl oryginaln¹ wartoœæ, wartoœæ z 15% napiwkiem i wartoœæ z 20% napiwkiem.
    //printf ("%0.2f\t%0.2f\t%0.2f\n", i, (i * 1.15),(i * 1.20));
    printf ("%10.2f %10.2f %10.2f\n", i, (i * 1.15),(i * 1.20));
  }

  // Zaczekaj na naciœniecie klawisza Return lub Enter.
  getchar();
	
  return 0;
	
}
