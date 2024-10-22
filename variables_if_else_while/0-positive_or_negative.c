#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * and prints whether n is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;  // Variable to store the random number

    srand(time(0));  // Seed the random number generator
    n = rand() - RAND_MAX / 2;  // Generate a random number

    printf("%d ", n);  // Print the random number
    if (n > 0)  // Check if n is positive
    {
        printf("is positive\n");  // Output if n is positive
    }
    else if (n == 0)  // Check if n is zero
    {
        printf("is zero\n");  // Output if n is zero
    }
    else  // If n is negative
    {
        printf("is negative\n");  // Output if n is negative
    }

    return 0;  // Return success
}

