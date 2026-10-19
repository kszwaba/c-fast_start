/* konwersja_temp2.c - Listing 5.5 - modyfikacja listingu 5.4 (konwersja_temp.c) */

#include <stdio.h>

int main(void) {
	
  float temp_i, temp_o; // Dwie temperatury: wejœciowa i wyjœciowa
  char ktora_i, ktora_o; // F lub C: wejœciowe i wyjœciowe
  char smieci; // Pozbycie siê niechcianych znaków.
	
  // Zapytaj u¿ytkownika.
  printf ("Wpisz temperaturê i okreœl, czy jest podana w stopniach Celsjusza lub Fahrenheita [##.# C/F]: ");

  // Odczytaj wejœcie jako warunek.
  if (scanf ("%f %c", &temp_i, &ktora_i) == 2) {

    // Dokonaj kowersji, bazuj¹c na ktora_i.
    switch (ktora_i) {

      // Celsjusze, skonwertuj do Fahrenheita.
      case 'C':
      case 'c':
       temp_o = (temp_i * (9.0/5.0)) + 32;
       ktora_o = 'F';
       break;

      // Fahrenheit, skonwertuj do Celsjuszy.
      case 'F':
      case 'f':
        temp_o = (temp_i - 32) * (5.0/9.0);
        ktora_o = 'C';
        break;

      // Problem: ani C, ani F, ustaw ktora_o na wartoœæ FALSE.
      default:
        ktora_o = 0;
        break;

    } // Koniec instrukcji switch.

		// Wyœwietl wyniki, u¿ywaj¹c ktora_o do wskazania, czy dosz³o do konwersji.
    if (ktora_o) {
      printf ("%0.1f %c to %0.1f %c.\n", temp_i, ktora_i, temp_o, ktora_o);
    } else {
      printf ("Nie wpisa³eœ 'C' lub 'F' w celu oznaczenia rodzaju aktualnej temperatury.\n");
    }

  } else { // Nie wpisano danych w poprawnej postaci.

    printf ("Nie zosta³a zachowana poprawna sk³adnia danych wejœciowych.\n");
		
  } // Koniec g³ównego IF.
	
  // Pomiñ niepotrzebne znaki.
  do {
    smieci = getchar();
  } while (smieci != '\n' );
			
	// Zaczekaj na naciœniêcie klawisza Return lub Enter.
  getchar();
	
  return 0;
	
}
