/******************************************************************************
QUESTION NUMBER : 3

       Program   : Pyramid of Stars
       Purpose   : To Print a Pyramid of Stars
       Input     : Number of Rows
       Output    : Pyramid Pattern of Stars

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j;    //Variable declaration

    printf("Enter number of rows: ");
    scanf("%d", &n);  

    
    for (i = 1; i <= n; i++)   // Loop
    {
    
        for (j = 1; j <= n - i; j++)  // Print spaces
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++) // Loop
        {
            printf("*");
        }

        printf("\n");  // Move next line
    }

    return 0;  
}
