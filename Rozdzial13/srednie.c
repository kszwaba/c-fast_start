/* srednie.c - Listing 13.3 */

#include <stdio.h>
#include <string.h> /* Dla funkcji zwiazanych z ci¹gami znaków. */

#define DL_TEKSTU 20

#define LICZBA_STUDENTOW 10

int main (void) {
  
  /* Definicja struktury. */
  struct srednie_studentow {
    char imie[DL_TEKSTU];
    char nazwisko[DL_TEKSTU];
    float srednia;
  };
  
  /* Utwórz nowy typ. */
  typedef struct srednie_studentow ss;
  
  /* Utwórz tablicê struktur. */
  ss grupa[LICZBA_STUDENTOW];
  
  /* Zadeklarowanie liczników. */
  int i, licz;
  int ile = 0;
  
  /* Zmienna tymczasowa. */
  float s; /* srednia */

  /* Dodatkowe informacje do obs³ugi wejœcia. */
  char kod_grupy[12], im[DL_TEKSTU], na[DL_TEKSTU];
  
  /* Zapytaj u¿ytkownika. */
  printf ("Wpisz kod grupy (bez spacji): ");
  scanf ("%11s", kod_grupy);
  
  /* W razie potrzeby wstaw sprawdzenie kodu grupy. */
  
  /* W pêtli odczytaj dane studentów. */
  for (i = 0; i < LICZBA_STUDENTOW; ++i) {
    
    /* Wyœwietl zapytanie. */
    printf ("Wpisz imiê i nazwisko studenta oraz jego œredni¹. Wpisz 0 0 0, aby wyjœæ.\n(Imiê Nazwisko ##.#): ");
    
    /* Odczytaj wejœcie. */
    licz = scanf ("%11s %11s %f", im, na, &s);
    
    /* SprawdŸ, czy u¿ytkownik skoñczy³. */
    if (im[0] == '0') {
      break;
    }
    
    /* Obs³uga wejœcia. */
    if (licz == 3) {
      
      strncpy(grupa[i].imie, im, DL_TEKSTU-1);
      grupa[i].imie[DL_TEKSTU-1] = '\0';
      strncpy(grupa[i].nazwisko, na, DL_TEKSTU-1);
      grupa[i].nazwisko[DL_TEKSTU-1] = '\0';
      grupa[i].srednia = s;
      ++ile;
      
    } else { 
      printf ("Nie podano danych w poprawnym formacie.\n");
      break; 
    }
  }
  
  /* Wyœwietl dane. */
  printf ("Grupa '%s'. Studenci grupy wraz ze œrednimi ocen:\n", kod_grupy);
  for (i = 0; i < ile; ++i) {
    printf("%s %s %0.1f\n", grupa[i].imie, grupa[i].nazwisko, grupa[i].srednia);
  }
    
  getchar(); /* Pauza. */
  getchar(); /* Pauza. */
  return 0;

}
