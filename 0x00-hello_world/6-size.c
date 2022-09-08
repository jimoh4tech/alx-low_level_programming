#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A simple C program that prints the size of types in C
 *
 * Return: 0
*/

int main(void)
{
    printf("Size of a char: %lu btye(s)\n", sizeof(char));
    printf("Size of an int: %lu btye(s)\n", sizeof(int));
    printf("Size of a long int: %lu btye(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu btye(s)\n", sizeof(long long int));
    printf("Size of a float: %lu btye(s)\n", sizeof(float));

    return (0);

}
