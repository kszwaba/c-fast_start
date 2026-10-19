/* odczyt_binarny.c - Listing 12.6 */

#include <stdio.h>

/* Ustaw œcie¿kê i nazwê pliku. */
#define PLIK "C:\\testy\\liczby.dat"

/* Liczba elementów do zapisania. */
#define ELEM 50

int main (void) {
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;
	
  int i; /* Zmienna pêtli. */
  int liczby[ELEM]; /* Tablica liczb. */
	
  /* Próba otwarcia pliku binarnego do odczytu. */
  fp = fopen(PLIK, "rb");
	
  if (fp != NULL) { /* Plik zosta³ otwarty. */
	
    printf("Liczby zawarte w pliku 'liczby.dat':\n");
		
    /* Wczytaj ca³¹ zawartoœæ pliku do tablicy. */
    fread (liczby, sizeof(int), ELEM, fp);
		
    /* Wyœwietl poszczególne liczby. */
    for (i = 0; i < ELEM; i++) {
      printf("%d\n", liczby[i]);
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
