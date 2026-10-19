/* sortuj.c - Listing 11.6 - modyfikajca kopiowanie.c (listing 11.5) */

#include <stdio.h>
#include <string.h> /* Dla strncpy() i strcmp(). */

void wyczysc_wejscie (void); /* Prototyp funkcji. */

#define ILE_TEKSTOW 10
#define DL_TEKSTU 10

int main (void) {
  
  /* Zadeklaruj wielowymiarow¹ tablicê znaków. */
  char wyrazy[ILE_TEKSTOW][DL_TEKSTU];
  
  char wejscie[DL_TEKSTU]; /* Dane od u¿ytkownika. */

  /* WskaŸniki. */
  char *wyrazy_wsk[ILE_TEKSTOW];
  char *tymcz;
  
  int i,j; /* Zmienna pêtli. */
  int ile = 0; /* Zlicza wpisane wyrazy. */
  
  /* Odczytaj maksymalnie ILE_TEKSTOW wyrazów. */
  for (i = 0; i < ILE_TEKSTOW; ++i) {
    
    /* Poproœ o wpisanie wyrazu i pobierz go z wejœcia. */
    printf("Wpisz wyraz (lub 0, by wyjœæ): ");
    scanf("%9s", wejscie);
    wyczysc_wejscie();
    
    /* SprawdŸ, czy wpisano 0. */
    if (wejscie[0] == '0') break;
    
    /* Skopiuj wejœcie do tablicy. */
    strncpy(wyrazy[i], wejscie, DL_TEKSTU);
    
    /* Kopiuj adres do wskaŸnika. */
    wyrazy_wsk[i] = &wyrazy[i][0];
    
    /* Zwiêksz licznik wyrazów. */
    ++ile;
    
  } /* Koniec pêtli. */
  
  printf("Wpisanio %d wyrazów.\n", ile);

  /* To jest sortowanie b¹belkowe. */
  for (i = 0; i < (ile - 1); ++i) { /* Przejœcie przez ka¿y wyraz. */
    
    for (j = (i + 1); j < ile; ++j) { /* Ponowne przejœcie przez ka¿dy wyraz. */
      
      if (strcasecmp(wyrazy_wsk[i],wyrazy_wsk[j]) > 0) { /* Porównanie wyrazów. */
        
        tymcz = wyrazy_wsk[i]; /* Przenieœ pierwsze s³owo do zm. tymczasowej. */
        wyrazy_wsk[i] = wyrazy_wsk[j]; /* Przypisz drugie s³owo do pierwszego. */
        wyrazy_wsk[j] = tymcz; /* Przypisz zm. tymczasow¹ (oryginalnie pierwsze s³owo) do 2 s³owa. */
        
      } /* Koniec IF. */

    } /* Koniec wewnêtrznego FOR. */

  } /* Koniec zewnêtrznego FOR. */
  
  printf("Kolejnoœæ wyrazów w porz¹dku alfabetycznym:\n");

  /* Wyœwietl wyrazy w pêtli. */
  for (i = 0; i < ile; i++) {
    printf("%s\n", wyrazy_wsk[i]);
  }
  
  getchar();  
  return 0;
  
} /* Koniec funkcji main(). */

/* Funkcja czyœci wejœcie ze zbêdnych znaków. */
void wyczysc_wejscie (void) {
  
  char smieci; // W celu pozbycia siê nadmiarowych znaków.
  
  // PrzejdŸ przez wejœcie i ignoruj nowe znaki.
  do {
    smieci = getchar();
  } while (smieci != '\n' );

} /* Koniec funkcji wyczysc_wejscie(). */
