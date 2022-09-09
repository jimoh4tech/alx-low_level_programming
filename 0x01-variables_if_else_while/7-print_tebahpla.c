#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print letters from z to a 
 *
 * Return: 0
*/

int main(void)

{

char ch = 'z';

while (ch >= 'a')
{
putchar(ch);
--ch;
}
 
putchar('\n');

return (0);

}
