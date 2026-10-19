/* quiz3.c - listing 6.3 - modyfikacja listingów 6.1 i 6.2 (quiz.c i quiz2.c) */

#include <stdio.h>

int main (void) {

  unsigned int odpowiedzi[] = {1, 1995, 1989}; // Tablica przechowuj¹ca trzy poprawne odpowiedzi.
  char wejscie[10]; // Wpisane znaki.
  int odp_uzytkownika; // Przechowuje odpowiedŸ u¿ytkownika.
  char smieci; // W celu pozbycia siê nadmiarowych znaków.
	
  // Zadaj pierwsze pytanie i sprawdŸ odpowiedŸ.
  printf ("Ile razy Lech Wa³êsa zosta³ wybrany na prezydenta? ");

  // Odczytaj wejœcie i przypisz je do zmiennej odp_uzytkownika.
  fgets (wejscie, sizeof(wejscie), stdin);
  sscanf (wejscie, "%d", &odp_uzytkownika);
	
  // SprawdŸ poprawnoœæ.
  if (odp_uzytkownika == odpowiedzi[0]) {
    printf ("OdpowiedŸ poprawna!\n");
  } else {
    printf ("OdpowiedŸ b³êdna! Lech Wa³êsa zosta³ wybrany na prezydenta dok³adnie %d raz.\n", odpowiedzi[0]);
  }
	
  // Pozbycie siê zbêdnych znaków i zaczekanie na ponowne naciœniêcie klawisza Return lub Enter.
  do {
    smieci = getchar();
  } while (smieci != '\n');
	
  /* --- Powtórz ca³y proces dla pozosta³ych pytañ. --- */
	
  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();
	
  return 0;
	
}
