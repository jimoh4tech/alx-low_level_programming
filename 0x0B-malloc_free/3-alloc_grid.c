#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - fills 2D array with 0s
 * @width: size of the row
 * @height: size of the column
 * Return: NULL if @width or @height is less than 1, else return pointer.
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);

for (i = 0; i < height; i++)
grid[i] = malloc(sizeof(int) * width);

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
grid[i][j] = 0;

return (grid);
}
