#include <stdio.h>

void clear_input (char input_buffer[], char trash_buffer[]);

int main(){

    #define SIZE_IB 10
    #define SIZE_TB 10

    int i; // Index for the input_buffer array.
    int j; // Index for the trash_buffer array.

    int size_ib =10; // Size of the input_buffer array.
    int size_tb =10; // Size of the trash_buffer array.

    char input_buffer[SIZE_IB] = {0}; // Array to hold the input characters. Initialized to all zeros.
    char trash_buffer[SIZE_TB] = {0}; // Array to hold discarded input for demonstration purposes. Initialized to all zeros.

    printf("Enter any text.\n");

    //getchar(); // Wait for user input.
    input_buffer[0] = getchar(); // Read the first character from input and store it in the buffer.
    //printf("First character read: '%c'\n", input_buffer[0]);
    clear_input(input_buffer, trash_buffer); // Call the clear_input function to clear the input buffer.
    //getchar(); // Wait for user input again to demonstrate that the input buffer has been cleared.

    for(i = 0; i < size_ib; i++){
        if(input_buffer[i] != '\n'){
            printf("input_buffer[%d] = %c\n", i, input_buffer[i]); // Print the character stored in the buffer.
        }
        else{
            printf("input_buffer[%d] = %c", i, input_buffer[i]); // Print the newline character stored in the buffer.
        }
    }
    printf("\n");

    for(j = 0; j < size_tb; j++){
        if(trash_buffer[j] != '\n'){
            printf("trash_buffer[%d] = %c\n", j, trash_buffer[j]); // Print the character stored in the buffer.
        }
        else{
            printf("trash_buffer[%d] = %c", j, trash_buffer[j]); // Print the newline character stored in the buffer.
        }
    }

    return 0;

}

void clear_input (char input_buffer[], char trash_buffer[]){

    int ch; // Variable to hold the character read from input.
    int i = 1; // Index for the input_buffer array.
    int j = 0; // Index for the trash_buffer array.

    // Read characters from input and ignore them.
    do {
        ch = getchar();
        input_buffer[i] = ch; // Store the character in the buffer.
        i++;
        trash_buffer[j] = ch; // Store the character in the trash_buffer for demonstration purposes.
        j++;
    } while (ch != '\n');

}



