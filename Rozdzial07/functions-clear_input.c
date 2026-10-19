#include <stdio.h>

void clear_input ();


int main(){

    return 0;

}

void clear_input (){

    char trash; // Variable to discard excess input data.

    // Read characters from input and ignore them.
    do {
        trash = getchar();
    } while (trash != '\n');

}



