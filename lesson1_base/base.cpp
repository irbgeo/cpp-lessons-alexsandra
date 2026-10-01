// include library
#include <stdio.h> // this line brings in a C library. the library "stdio.h" gives us tools to write text to the screen and read text from the keyboard

int main() // every C program needs a function called "main". the program always starts here. the word "int" means this function will give back a number at the end
{
    printf("Hello, World!\n"); // "printf" writes text to the screen. we give it the text "Hello, World!" in brackets. "\n" makes a new line after the text

    return 0; // this line stops the "main" function and gives back the number 0. the number 0 tells the computer that the program finished with no errors
}
