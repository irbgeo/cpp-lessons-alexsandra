// include library
#include <iostream> // this line brings in a C++ library. the library "iostream" gives us tools to write text to the screen and read text from the keyboard

using namespace std; // this line tells the program to use the "std" group of names. because of this, we can write "cout" instead of the longer "std::cout"

int main() // every C++ program needs a function called "main". the program always starts here. the word "int" means this function will give back a number at the end
{
    cout << "Hello, World!\n"; // "cout" writes text to the screen. the arrow "<<" sends the text "Hello, World!" to cout. "\n" makes a new line after the text

    return 0; // this line stops the "main" function and gives back the number 0. the number 0 tells the computer that the program finished with no errors
}
