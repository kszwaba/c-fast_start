/* struktura_temp.c - Listing 13.1 */

#include <stdio.h>

/* Ustaw œcie¿kê i nazwê pliku. */
#define PLIK "C:\\testy\\pogoda.dat"

int main (void) {
	
  /* Zdefiniuj strukturê i zadeklaruj zmienn¹ jej typu. */
  struct rekord_temp {
    char data[11]; /* RRRR-MM-DD */
    int wysoka;
    int niska;
  };
	
  struct rekord_temp dzis; /* Jedna zmienna typu rekord_temp. */
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;

  /* Próba otwarcia pliku binarnego w trybie dodawania. */
  fp = fopen(PLIK, "ab");
	
  if (fp != NULL) { /* Uda³o siê otworzyæ plik. */
		
		/* Poproœ o dane. */
    printf ("Wpisz datê, a tak¿e najwy¿sz¹ i najni¿sz¹ temperaturê.\n(RRRR-MM-DD ## ##): ");
		
    /* Obs³u¿ wejœcie. */
    if (scanf ("%s %d %d", dzis.data, &dzis.wysoka, &dzis.niska) == 3) {
			
      /* Zapisz dane. */
      fwrite (&dzis, sizeof(struct rekord_temp), 1, fp);
      printf ("Dane zosta³y zapisane.\n");
      //printf("Wpisa³eœ datê %s, najwy¿sz¹ temperaturê w tym dniu ustali³eœ na %d, a najni¿sz¹ na %d.\n", dzis.data, dzis.wysoka, dzis.niska);
			
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
