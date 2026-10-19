/* zm5.c - Listing 2.5 */

#include <stdio.h>

int main(void) {

  int wiek; /* Wiek u¿ytkownika w latach. */
  float stawka_godzinowa; /* Stawka godzinowa za wykonywan¹ pracê. */
  char plec; /* M lub K */

  /* Utwórz ci¹g znaków i przypisz mu wartoœæ. */
  char imie_nazwisko[] = "Danuta Sroka";

  /* Ustawienie zmiennych. */
  wiek = 40;
  stawka_godzinowa = 6.35;
  plec = 'K';

  /* Wyœwietlenie wartoœci zmiennych. */
  printf("Masz %d lat.\n",wiek);
  printf("Twoja stawka godzinowa to %0.2f z³. Oznacza to zarobek %0.2f z³ w ci¹gu roku.\n",stawka_godzinowa,stawka_godzinowa * 40 * 52);
  printf("Twoja p³eæ to %c.\n",plec);
  printf("Nazywasz siê %s.\n",imie_nazwisko);

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}

