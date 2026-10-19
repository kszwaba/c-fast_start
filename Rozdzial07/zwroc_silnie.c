/* zwroc_silnie.c - Listing 7.3 */

#include <stdio.h>

unsigned long long int zwroc_silnie (int li); /* Prototyp funkcji. */

int main (void) {
	
  char wejscie[3]; // Dane z klawiatury.
  int liczba; // Wartoœæ, dla której obliczamy silniê.
	
  // Wyœwietlenie zapytania.
  printf ("Wpisz liczbê dodatni¹, dla której ma zostaæ policzona silnia: ");
	
  fgets (wejscie, sizeof(wejscie), stdin); // Odczytanie wejœcia.
  sscanf (wejscie, "%d", &liczba);
	
  // Sprawdzenie wejœcia jako warunku.
  if (liczba > 0 ) {
		
    // Wejœcie by³o poprawne, wyœwietl liczbê i jej silniê.
    printf ("Silnia z %d wynosi %llu.\n", liczba, zwroc_silnie (liczba));
		
  } else { // Nie podano poprawnych danych.
    printf ("Wpisana wartoœæ musi byæ dodatni¹ liczb¹ ca³kowit¹!\n");
  }
	
  getchar(); /* Zaczekaj na naciœniêcie klawisza Return lub Enter. */

  return 0;
	
}

/* Funkcja przyjmuje liczbê i zwraca jej silniê. */
unsigned long long int zwroc_silnie (int li) {

  unsigned long long int wynik = 1; // Przysz³y wynik obliczeñ.
  unsigned int i; // Mno¿nik u¿ywany w obliczeniach.

  // PrzejdŸ przez wszystkie mno¿niki a¿ do li.
  for (wynik = 1, i = 1; i <= li; ++i) {
		
    wynik *= i; // Mulitply the current sum by the multiplier.
		
	}
	
  return wynik;
	
} /* Koniec funkcji zwroc_silnie(). */
