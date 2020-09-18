#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int rows, cols;
	scanf("%d", &rows);
	scanf("%d", &cols);
	
	// upper left (1,1) 
	// bottom right (rows,cols)
	int grid[rows+1][cols+1];

	for (int row = 1; row <= rows; row++)
	{
		for (int col = 1; col <= cols; col++)
		{
			scanf(" %d", &grid[row][col]);
		}
	}
}