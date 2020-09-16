#include <stdio.h>
#include <stdlib.h>

int min_array(int length, int *array);
int max_array(int length, int *array);

int main(int argc, char **argv)
{
	int length;
	scanf("%d", &length);

	int *x_ptr;
	x_ptr = (int *)malloc(length*sizeof(int));
	int *y_ptr;
	y_ptr = (int *)malloc(length*sizeof(int));
	
	for (int i = 0; i < length; i++)
	{
		scanf("%d,%d", (x_ptr + i), (y_ptr + i));
	}
	// search bottom-left corner
	printf("%d,%d\n", min_array(length, x_ptr) - 1, min_array(length, y_ptr) - 1);
	// search top-right corner
	printf("%d,%d", max_array(length, x_ptr) + 1, max_array(length, y_ptr) + 1);
}

int min_array(int length, int *array)
{
	int min = *array;
	for (int i = 0; i < length; i++)
	{
		if (*(array + i) < min)
			min = *(array + i);
	}
	return min;
}

int max_array(int length, int *array)
{
	int max = *array;
	for (int i = 0; i < length; i++)
	{
		if (*(array + i) > max)
			max = *(array + i);
	}
	return max;
}