/* funkcja_wyczysc.c - Listing 7.1 */

#include <stdio.h>

void wyczysc_wejscie (void); /* Prototyp funkcji. */

int main (void) {
	
  // Poproœ u¿ytkownika o wpisanie pewnych danych.
  printf ("Wpisz dowolny tekst, a i tak go pominê: ");

  // Odczytaj wejœcie.
  getchar();

  // Pomiñ wszystkie pozosta³e znaki.
  wyczysc_wejscie();

  // Zaczekaj na naciœniêcie klawisza Enter lub Return.
  getchar();

  return 0;
	
} /* Koniec funkcji main(). */


/* Funkcja pomija wszystkie znaki a¿ do napotkania znaku nowego wiersza. */
void wyczysc_wejscie (void) {

  char smieci; // Zmienna pomocnicza w celu pozbycia siê nadmiarowych danych.

  // Pobieraj znaki z wejœcie i ignoruj je.
  do {
    smieci = getchar();
  } while (smieci != '\n');

} /* Koniec funkcji wyczysc_wejscie(). */
