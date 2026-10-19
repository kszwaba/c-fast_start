/* odczyt_temp.c - Listing 13.2 */

#include <stdio.h>

/* Ustaw œcie¿kê i nazwê pliku. */
#define PLIK "C:\\testy\\pogoda.dat"

int main (void) {
	
  /* Zdefiniuj strukturê. */
  struct rekord_temp {
    char data[11];
    int wysoka;
    int niska;
  };
	
  /* U¿yj operatora typedef do utworzenia aliasu. */
  typedef struct rekord_temp rt;
	
  /* Utwórz zmienn¹ bêd¹c¹ struktur¹. */
  rt dzien;
	
  /* Potrzebujemy wskaŸnika typu FILE. */
  FILE *fp;

  /* Próba otwarcia pliku binarnego w trybie odczytu. */
  fp = fopen(PLIK, "rb");
	
  if (fp != NULL) { /* Plik zosta³ otwarty. */
		
    /* PrzejdŸ przez ca³y plik, przypisuj¹c ka¿d¹ ze struktur do dzien. */
    while (fread (&dzien, sizeof (rt), 1, fp)) {
			
      /* Wyœwietl informacje, u¿ywaj¹c danych ze struktury. */
      printf ("Data: %s\nWysoka: %d\nNiska: %d\n\n", dzien.data, dzien.wysoka, dzien.niska);
			
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
