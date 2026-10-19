/* silnia.c - Listing 4.6 */

#include <stdio.h>

int main(void) {

  // W tym przyk³adzie stosujemy tylko liczby dodatnie.

  unsigned int liczba = 5; // Wartoœæ, z której wyliczamy silniê.
  unsigned int wynik = 1; // Zmienna przechowuj¹ca przysz³y wynik - silniê.
  unsigned int i; // Mno¿nik u¿ywany do obliczenia silni.

  // PrzejdŸ przez wszystkie mno¿niki od 1 do liczba.
  for (i = 1; i <= liczba; ++i) {

    wynik *= i; // Mno¿enie wczeœniejszego wyniku przez mno¿nik.

  } // Koniec pêtli.

  // Wyœwietlenie wyniku.
  printf("Silnia z liczby %u to %u.\n", liczba, wynik);

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
