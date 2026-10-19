/* zm_globalne.c - listing 7.6 */

#include <stdio.h>

int g_liczba = 100; // Zmienna globalna.

void inna_funkcja (void); /* Prototyp funkcji. */

int main (void) {
	
  int liczba = 20; // Zmienna lokalna.
	
  // Wyœwietl zmienn¹ lokaln¹ i globaln¹.
  printf ("Wewn¹trz funkcji main(). Zmienna globalna g_liczba wynosi %d. Zmienna lokalna liczba wynosi %d.\n", g_liczba, liczba);
	
  // Wywo³aj inn¹ funkcjê.
  inna_funkcja();
	
  // Ponownie wyœwietl zmienn¹ lokaln¹ i globaln¹.
  printf ("Po wywo³aniu inna_funkcja() zmienna globalna g_liczba wynosi %d. Zmienna lokalna liczba wynosi %d.\n", g_liczba, liczba);
	
  getchar();
	
  return 0;
	
}

/* Wyœwietla dwie zmienne. */
void inna_funkcja (void) {
	
  int liczba = 600; // Zmienna lokalna.
  g_liczba = 0;
	
  // Wyœwietl zmienn¹ lokaln¹ i globaln¹.
  printf ("Wewn¹trz funkcji inna_funkcja() zmienna globalna g_liczba wynosi %d. Zmienna lokalna liczba wynosi %d.\n", g_liczba, liczba);
	
  return;
	
}
