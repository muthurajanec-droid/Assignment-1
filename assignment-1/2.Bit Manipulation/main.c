/******************************************************************************
QUESTION NUMBER : 2

   Program   : Bit Manipulation
   Purpose   : To Set, Clear, and Toggle Specific Bits
   Input     : An 8-bit Unsigned Character
   Output    : Modified Register Value

*******************************************************************************/
#include <stdio.h>

unsigned char modifyRegister(unsigned char reg)
{
    reg = reg | (1 << 2);   // Set 3rd bit (bit index 2)
    reg = reg & ~(1 << 5);  // Clear 6th bit (bit index 5)
    reg = reg ^ (1 << 0);   // Toggle 1st bit (bit index 0)

    return reg;             
}

int main()
{
    unsigned char reg, result;

    printf("Enter register value (0-255): ");
    scanf("%hhu", &reg);  // Read 8-bit unsigned value

    result = modifyRegister(reg);  // Call function 

    printf("Modified register value = %u\n", result);

    return 0;  
}