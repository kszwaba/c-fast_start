/* zm3.c - Listing 2.3 */

#include <stdio.h>

int main(void) {

  int wiek; /* Wiek u¿ytkownika w latach. */
  float stawka_godzinowa; /* Stawka godzinowa za wykonywan¹ pracê. */

  /* Ustawienie zmiennych. */
  wiek = 40;
  stawka_godzinowa = 6.35;

  /* Wyœwietlenie wartoœci zmiennych. */
  printf("Masz %d lat.\n",wiek);
  printf("Twoja stawka godzinowa to %0.2f z³. Oznacza to zarobek %0.2f z³ w ci¹gu roku.\n",stawka_godzinowa,stawka_godzinowa * 40 * 52);

  getchar(); /* Zatrzymaj a¿ u¿ytkownik naciœnie klawisz Enter lub Return. */

  return 0;

}
