/* c_na_f.c - Listing 5.3 */

#include <stdio.h>

int main(void) {
	
  float temp_f, temp_c; // Fahrenheit i Celsjusz
  char wejscie[10]; // Wczytywany tekst.

  // Zapytaj u¿ytkownika.
  printf ("Wpisz temperaturê w stopniach Celsjusza: ");

  // Odczytaj temperaturê i wpisz j¹ do zmiennej temp_c.
  fgets (wejscie, sizeof(wejscie)-1, stdin);
  sscanf (wejscie, "%f", &temp_c);

  // Dokonaj konwersji.
  temp_f = temp_c * 9.0/5.0 + 32; // Lub (temp_c * (9.0/5.0)) + 32)

  // Wyœwietl wynik.
  printf ("%0.1f stopni Celsjusza to %0.1f stopni Fahrenheita.\n", temp_c, temp_f);

	// Zaczekaj na naciœniêcie klawisza Enter lub Return.
  getchar();
  getchar();

  return 0;
	
}
