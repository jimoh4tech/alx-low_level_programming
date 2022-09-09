#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: A simple C program that prints numbers from 0 to 9
 * 
 * Return: 0
 */

int main(void) {
    
char num = '0';

for (; num <= '9';)
{
putchar(num);
++num;
}
putchar('\n');

return (0);
}
