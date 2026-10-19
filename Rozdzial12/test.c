/* test.c - Listing 12.1 */

#include <stdio.h>

/* Ustal nazwê pliku. */
#define PLIK "dane.txt"

int main (void) {
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;
	
  /* Próba otwarcia pliku do zapisu. */
  fp = fopen(PLIK, "w");
	
  /* Poinformuj, czy plik rzeczywiœcie zosta³ otwarty. */
  if (fp != NULL) {
    printf ("Plik zosta³ otwarty.\n");
  } else {
    printf ("Nie uda³o siê otworzyæ pliku.\n");
    /* Jeœli chcesz, mo¿na wyjœæ z aplikacji. */
  }
	
  /* Zamknij plik lub zg³oœ problem, jeœli nie uda³o siê tego zrobiæ. */
  if (fclose(fp) != 0) {
    printf ("Nie uda³o siê zamkn¹æ pliku.\n");
  } else {
    printf ("Plik zosta³ zamkniêty.\n");
  }
	
  getchar(); /* Pauza. */
  return 0;
}
