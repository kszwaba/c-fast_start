/* zm4.c - Listing 2.4 */

#include <stdio.h>

int main(void) {

  int wiek; /* Wiek u�ytkownika w latach. */
  float stawka_godzinowa; /* Stawka godzinowa za wykonywan� prac�. */
  char plec; /* M lub K */

  /* Ustawienie zmiennych. */
  wiek = 40;
  stawka_godzinowa = 6.35;
  plec = 'K';

  /* Wy�wietlenie warto�ci zmiennych. */
  printf("Masz %d lat.\n",wiek);
  printf("Twoja stawka godzinowa to %0.2f z�. Oznacza to zarobek %0.2f z� w ci�gu roku.\n",stawka_godzinowa,stawka_godzinowa * 40 * 52);
  printf("Twoja p�e� to %c.\n",plec);

  getchar(); /* Zatrzymaj a� u�ytkownik naci�nie klawisz Enter lub Return. */

  return 0;
}
