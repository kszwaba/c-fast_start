/* wskaznik4.c - Listing 9.4 */

#include <stdio.h>

int main (void) {

  /* Zadeklaruj i zainicjalizuj zmienn¹ ca³kowit¹
   * oraz wskaŸnik do niej. */
  int a = 456;
  int *x;

  /* Zapamiêtaj adres zmiennej ca³kowitej w
   * zmiennej wskaŸnikowej. */
  x = &a;

  /* Wyœwietl adres przechowywany w zmiennej wskaŸnikowej. */
  printf("Adres a: %p\n", x);

  /* Wyœwietl wartoœæ zmiennej ca³kowitej. */
  printf("a przed: %d\n", a);

  /* Ponownie wyœwietl wartoœæ zmiennej, ale tym razem
   * u¿yj dereferencji (korzystaj¹c z operatora *)
   * dla adresu przechowywanego w zmiennej wskaŸnikowej. */
  printf("*x przed: %d\n", *x);

  /* Zmieñ wartoœæ a, u¿ywaj¹c w tym celu
   * dereferencji adresu ze zmiennej wskaŸnikowej. */
  *x = 123;
	
  /* Wyœwietl zmienion¹ wartoœæ zarówno bezpoœrednio
   * (u¿ywaj¹c nazwy zmiennej), jak i poœrednio
   * (u¿ywaj¹c operatora dereferencji dla wskaŸnika. */
  printf("a po:   %d\n", a);
  printf("*x po:   %d\n", *x);

  /* Zaczekaj na naciœniêcie klawisza Enter lub Return. */
  getchar();

  return 0;

}


