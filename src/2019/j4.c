#include <stdio.h>
#define MAX 1000000

void horizontalFlip(int arr[2][2]);
void verticalFlip(int arr[2][2]);
void swap(int *, int *);

int main(int argc, char ** argv)
{
	int grid[2][2] = {{1, 2},
					  {3, 4}};
	
	char sequence[MAX];
	fgets(sequence, MAX, stdin);

	int i = 0;
	while (sequence[i] != '\0')
	{
		if (sequence[i] == 'V')
		{
			verticalFlip(grid);
		}
		else if (sequence[i] == 'H')
		{
			horizontalFlip(grid);
		}
		i++;
	}

	// Printing the grid
	printf("%d %d\n%d %d\n", grid[0][0], grid[0][1], grid[1][0], grid[1][1]);
}

void horizontalFlip(int arr[2][2])
{
	swap(&arr[0][0], &arr[1][0]);
	swap(&arr[0][1], &arr[1][1]);
}

void verticalFlip(int arr[2][2])
{
	swap(&arr[0][0], &arr[0][1]);
	swap(&arr[1][0], &arr[1][1]);	
}

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}