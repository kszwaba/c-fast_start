/* paczek.c - Listing 5.1 */

#include <stdio.h>

int main(void) {

  char odpowiedz; // Pojedynczy znak przechowujπcy odpowiedü Tak (T) lub Nie (N).

  // Zadaj pytanie i zaczekaj na odpowiedü?
  printf("Czy lubisz pπczki [T/N]? ");
  odpowiedz = getchar();

  // Zareaguj na odpowiedü
  switch (odpowiedz) {

    case 'T':
    case 't':
      printf("Oooo... pπczki.\n");
      break;

    case 'N':
    case 'n':
      printf("Nie lubisz pπczkÛw?! Przecieø sπ takie smaczne!\n");
      break;

    default:
      printf("Poprawne odpowiedzi to 'T' lub 'N'.\n");
      break;

  } // Koniec instrukcji switch.

  getchar(); /* Zatrzymaj aø uøytkownik naciúnie klawisz Enter lub Return. */
  getchar(); /* Czasami potrzebne jest kolejne wywo≥anie tej funkcji. */

  return 0;
}
