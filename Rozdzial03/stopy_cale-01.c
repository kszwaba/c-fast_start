#include <stdio.h>

int main (void) {
    
    unsigned short int cale = 3435;
    unsigned short int stopy_int;
    unsigned short int cale_reszta;
    float stopy_float;

    stopy_int = cale /12;
    cale_reszta = cale % 12;
    stopy_float = cale / 12.0;

    printf ("%u cali to %u stóp i %u cali.\n", cale, stopy_int, cale_reszta);
    printf ("Jako wartość zmiennoprzecinkowa jest to %f stóp.\n", stopy_float);

    getchar();

    return 0;
}