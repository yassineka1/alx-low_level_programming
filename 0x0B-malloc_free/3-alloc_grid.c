#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of int
 *@width: Widtch of the array
 *@height: Height of the array
  *Return: NULL if the funtion fails of width or height <= 0,
 *	Pointer if sucess
 */

int **alloc_grid(int width, int height)
{
	int * *2dim_arr;
	int i1, i2;

	if (width <= 0 || height <= 0)
		return (NULL);

	2dim_arr = malloc(sizeof(int *) * height);

	if (2dim_arr == NULL)
		return (NULL);

	for (i1 = 0; i1 < height; i1++)
	{
		2dim_arr[i1] = malloc(sizeof(int) * width);

		if (2dim_arr[i1] == NULL)
		{
			for (; i1 >= 0; i1--)
				free(2dim_arr[i1]);

			free(2dim_arr);
			return (NULL);
		}
	}

	for (i1 = 0; i1 < height; i1++)
	{
		for (i2 = 0; i2 < width; i2++)
			2dim_arr[i1][i2] = 0;
	}

	return (2dim_arr);
}
