#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes each
 * element to 0.
 * @width: The width of the grid (number of columns).
 * @height: The height of the grid (number of rows).
 *
 * Return: Pointer to the 2D array, or NULL on failure or if width/height <= 0.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* Free previously allocated rows if allocation fails */
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
