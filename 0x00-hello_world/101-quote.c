#include<stdio.h>
int main()
{
  char quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

  write(1, quote, 59);

  return (1);

}
