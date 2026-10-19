/* przetworz_temp.c - Listing 12.4 - modyfikacja odczytaj_temp.c (listing 12.3) */

#include <stdio.h>

/* Ustaw œcie¿kê i nazwê pliku. */
#define PLIK "C:\\testy\\pogoda.txt"

int main (void) {
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;
	
  /* Tablica znaków przechowuj¹ca kolejne wiersze pliku. */
  char wiersz[30];
	
  int wysoka, niska; /* Temperatury. */
  char data[11]; /* Data w postaci RRRR-MM-DD plus znak \0. */

  /* Próba otwarcia pliku do odczytu. */
  fp = fopen(PLIK, "r");
	
  if (fp != NULL) { /* Otwarto plik. */
		
    printf("%10s %7s %7s\n", "Data", "Wysoka", "Niska");
		
    while (fgets(wiersz, sizeof(wiersz), fp)) {
      sscanf (wiersz, "%s %d %d", data, &wysoka, &niska);
      printf("%10s %7d %7d\n", data, wysoka, niska);
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
  return 0;
}
