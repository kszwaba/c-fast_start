/* losowy_odczyt.c - Listing 12.7 */

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
	
  /* Potrzebujemy dwe zmienne typu int. */
  int przesuniecie, liczba;

  /* Próba otwarcia pliku binarnego do odczytu. */
  fp = fopen(PLIK, "rb");
	
  if (fp != NULL) { /* Plik zosta³ otwarty. */
		
    /* ZnajdŸ losowe przesuniêcie. */
    srand((unsigned)time(NULL));
    przesuniecie = rand() % ELEM;
    przesuniecie *= sizeof(int);
		
    /* Odczytaj wartoœæ znajduj¹c¹ siê w losowym przesuniêciu. */
    fseek (fp, przesuniecie, SEEK_SET);
    fread (&liczba, sizeof(liczba), 1, fp);
		
    /* Wyœwietl liczbê. */
    printf("Liczba umieszczona w wylosowanym miejscu: %d.\n", liczba);

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
