/* zapisz_temp.c - Listing 12.2 */

#include <stdio.h>

/* Ustaw œcie¿kê i nazwê pliku. */
#define PLIK "C:\\testy\\pogoda.txt"

int main (void) {
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;
	
  int niska, wysoka; /* Temperatury. */
  char data[11]; /* W postaci RRRR-MM-DD wraz ze znakiem \0. */
	
  /* Próba otwarcia pliku w trybie dodawania. */
  fp = fopen(PLIK, "a");
	
  if (fp != NULL) { /* Uda³o siê otworzyæ plik. */
		
    /* Poproœ o dane. */
    printf ("Wpisz datê, a tak¿e najwy¿sz¹ i najni¿sz¹ temperaturê.\n(RRRR-MM-DD ## ##): ");
		
    /* Obs³u¿ wejœcie. */
    if (scanf ("%s %d %d", data, &wysoka, &niska) == 3) {
			
      /* Zapisz dane. */
      fprintf(fp, "%s %d %d\n", data, wysoka, niska);
      printf ("Dane zosta³y zapisane.\n");
			
    } else {
      printf ("Dane nie zosta³y zapisane z powodu ich b³êdnego formatu.\n");
    }
		
  } else {
    printf ("Nie uda³o siê otworzyæ pliku.\n");
    return 1; /* Wyjœcie z funkcji i aplikacji. */
  }
	
  /* Zamkniêcie pliku. */
  if (fclose(fp) != 0) {
    printf ("Nie uda³o siê zamkn¹æ pliku.\n");
  }
	
  getchar(); /* Pauza. */
  getchar(); /* Pauza. */
  return 0;
	
}
