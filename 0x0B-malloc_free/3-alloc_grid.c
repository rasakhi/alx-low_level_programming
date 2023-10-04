#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory to 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, w, h;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		a[h] = malloc(sizeof(int) * width);
		if (a[h] == NULL)
		{
			for (w = h; w >= 0; w--)
				free(a[w]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
