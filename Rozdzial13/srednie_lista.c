/*srednie_lista.c - Listing 13.4 - modyfikacja srednie.c (listing 13.3) */
  
#include <stdio.h>
#include <string.h> /* Funkcje zwi¹zane z ci¹gami znaków. */
#include <stdlib.h> /* Funkcje zwi¹zane z pamiêci¹. */

#define DL_TEKSTU 20
  
int main (void) {
    
  /* Definicja struktury. */
  struct srednie_studentow {
    char imie[DL_TEKSTU];
    char nazwisko[DL_TEKSTU];
    float srednia;
    struct srednie_studentow *next;
  };
    
  /* Zdefiniowanie struktury jako nowego typu. */
  typedef struct srednie_studentow ss;
    
  /* Utworzenie trzech wskaŸników na strukturê. */
  ss *pierwszy = NULL;
  ss *nowy = NULL;
  ss *tymcz = NULL;
    
  int licz; /* Liczba poprawnych danych wejœciowych. */
    
  /* Zmienna tymczasowa. */
  float s; /* œrednia */
    
  /* Dodatkowe informacje do obs³ugi wejœcia. */
  char kod_grupy[12], im[DL_TEKSTU], na[DL_TEKSTU];
  
  /* Zapytaj u¿ytkownika. */
  printf ("Wpisz kod grupy (bez spacji): ");
  scanf ("%11s", kod_grupy);
  
  /* W razie potrzeby wstaw sprawdzenie kodu grupy. */
    
  /* Wyœwietl zapytanie. */
  printf ("Wpisz imiê i nazwisko studenta oraz jego œredni¹. Wpisz 0 0 0, aby wyjœæ.\n(Imiê Nazwisko ##.#): ");
    
  /* Odczytaj wejœcie. */
  licz = scanf ("%11s %11s %f", im, na, &s);

  /* SprawdŸ, czy warunek zakoñczenia. */
  while (im[0] != '0') {
      
    /* Obs³uga wejœcia. */
    if (licz == 3) {
        
      nowy = (ss *) malloc(sizeof(ss));
        
      /* Sprawdzenie, ¿e nowy jest ró¿ne od NULL. */
        
      strncpy(nowy->imie, im, DL_TEKSTU-1);
      nowy->imie[DL_TEKSTU-1] = '\0';
      strncpy(nowy->nazwisko, na, DL_TEKSTU-1);
      nowy->nazwisko[DL_TEKSTU-1] = '\0';
      nowy->srednia = s;
      nowy->next = pierwszy;
      pierwszy = nowy;
                
    } else {
      printf ("Nie podano danych w poprawnym formacie.\n");
    }
      
    /* Wyœwietl zapytanie. */
    printf ("Wpisz imiê i nazwisko studenta oraz jego œredni¹. Wpisz 0 0 0, aby wyjœæ.\n(Imiê Nazwisko ##.#): ");
    
    /* Odczytaj wejœcie. */
    licz = scanf ("%11s %11s %f", im, na, &s);
      
  } /* Koniec pêtli while. */
      
  /* Wyœwietl dane i zwolnij pamiêæ. */
  printf ("Grupa '%s'. Studenci grupy wraz ze œrednimi ocen:\n", kod_grupy);
    
  nowy = pierwszy; /* Zaczynamy od pocz¹tku. */
    
  while (nowy != NULL) { /* Zatrzymaj siê na koñcu listy. */
    
    printf("%s %s %0.1f\n", nowy->imie, nowy->nazwisko, nowy->srednia);
    tymcz = nowy->next;
    free(nowy);
    nowy = tymcz;
  
  }
  
  getchar(); /* Pauza. */
  getchar(); /* Pauza. */
  return 0;
  
}
