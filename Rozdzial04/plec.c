/* plec.c - Listing 4.5 */

#include <stdio.h>

int main(void) {

  char plec = 'M'; // P³eæ jako pojedynczy znak.

  switch (plec) { // Zmieñ wyœwietlane pozdrowienie.

    case 'M':
      printf("Witam pana!\n");
      break;

    case 'K':
      printf("Witam pani¹!\n");
      break;

    default:
      printf("Witam wszystkich!\n");
      break;

  } // Koniec instrukcji switch.

  getchar(); /* Zatrzymaj a¿ uzytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
