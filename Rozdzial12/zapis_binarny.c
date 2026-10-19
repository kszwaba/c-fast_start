/* zapis_binarny.c - Listing 12.5 */

#include <stdio.h>
#include <stdlib.h> /* Dla rand() i srand(). */
#include <time.h> /* Dla time() u¿ywanej w srand(). */

/* Ustaw œcie¿kê i nazwê pliku. */
#define PLIK "C:\\testy\\liczby.dat"

/* Liczba elementów do zapisania. */
#define ELEM 50

int main (void) {
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;
	
  int i; /* Zmienna pêtli. */
  int liczby[ELEM]; /* Tablica liczb. */
	
  /* Próba otwarcia pliku binarnego do zapisu. */
  fp = fopen(PLIK, "wb");
	
  if (fp != NULL) { /* Plik zosta³ otwarty. */
	
    /* Inicjalizacja ziarna. */
    srand((unsigned)time(NULL));
		
    /* Wype³nienie tablicy liczbami losowymi mniejszymi od 100. */
    for (i = 0; i < ELEM; i++) {
      liczby[i] = rand() % 100;
    }
		
    /* Zapisz danych do pliku. */
    fwrite (liczby, sizeof(int), ELEM, fp);
    printf ("Dane zosta³y zapisane.\n");
		
  } else {
    printf ("Nie uda³o siê otworzyæ pliku.\n");
    return 1; /* Wyjœcie z funkcji i aplikacji. */
  }
	
  /* Zamkniêcie pliku. */
  if (fclose(fp) != 0) {
    printf ("Nie uda³o siê zamkn¹æ pliku.\n");
  }

  getchar(); /* Pauza. */
  return 0;
}
