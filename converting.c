//CONVERTING V1 - commentted by Jincheng Kuang

#include "converting.h" // include the header file "converting.h"

void converting() // void function convering doesn't take parameters, and doesn't return values
{
    printf("*** Start of Converting Strings to int Demo ***\n"); // print the header line
    char int_string[80]; // define char type array int_string, sized 80
    int int_number; // define int type variable int_number
    while (TRUE) // infinite loop until break
    {
        printf("Type the int numeric string (q - to quit):\n"); // print to inform to input
        gets(int_string); // get input and saved in char array int_string
        if (strcmp(int_string, "q") == 0) break; // if input is q, then break loop
        int_number = atoi(int_string); // call atoi function, convert the inputted string to integer, saved in variable int_number 
        printf("Converted number is %d\n", int_number); // print the output result
    }
    printf("*** End of Converting Strings to int Demo ***\n\n"); // print the footer line
}

int main()
{
    converting();
    return 0;
}