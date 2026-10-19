/* odczytaj_temp.c - Listing 12.3 */

#include <stdio.h>

/* Ustaw œcie¿kê i nazwê pliku. */
#define PLIK "C:\\testy\\pogoda.txt"

int main (void) {
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;
	
  /* Tablica znaków przechowuj¹ca kolejne wiersze pliku. */
  char wiersz[30];
	
  /* Próba otwarcia pliku do odczytu. */
  fp = fopen(PLIK, "r");
	
  if (fp != NULL) { /* Otwarto plik. */
		
    /* Nag³ówkek. */
    printf("Zawartoœæ pliku 'pogoda.txt':\n");
		
    /* PrzejdŸ przez plik, wyœwietlaj¹c kolejne wiersze. */
    while (fgets(wiersz, sizeof(wiersz), fp)) {
      printf("%s", wiersz);
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
