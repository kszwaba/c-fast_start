/* pogoda.c - Listing 4.4 */

#include <stdio.h>

int main(void) {

  int temperatura = 38; //Temperatura w stopniach Celsjusza.

  if (temperatura > 30) { // Sprawdü, czy gorπco.

    printf("Jest %d stopni, czyli na dworze jest bardzo gorπco.\n", temperatura);

  } else if (temperatura < 10) { // Wyúwietl 'zimno' lub 'lodowato' w zaleønoúci od temperatury.

    printf("Jest %d stopni, czyli na dworze jest %s!\n", temperatura, (temperatura < 0 ) ? "lodowato" : "zimno");

  } else { // Nie jest ani za gorπco ani za zimno.

    printf("Jest %d stopni, czyli na dworze jest ca≥kiem przyjemnie.\n", temperatura);

  }


  getchar(); /* Zatrzymaj aø uzytkownik naciúnie klawisz Enter lub Return. */

  return 0;

}
