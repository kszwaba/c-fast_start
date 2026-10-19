#include <stdio.h>

void zamiana(int pierwsza, int druga);

int main(void) {
			
  int a = 5, b = 10;

  printf("Przed wykonaniem zamiany: a = %d, b = %d\n", a, b);
  zamiana(a, b);
  printf("Po zamianie: a = %d, b = %d\n", a, b);

  return 0;
}

void zamiana(int pierwsza, int druga) {
  int tymcz = pierwsza;
  pierwsza = druga;
  druga = tymcz;
}
